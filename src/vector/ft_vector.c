/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 09:57:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/20 11:43:45 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct s_vector_metadata
{
	size_t	size;
	size_t	capacity;
	size_t	element_size;
	void	*address;
}	t_vector_metadata;

typedef struct s_vectors_metadata
{
	t_vector_metadata	*metadata;
}	t_vectors_metadata;

static t_vectors_metadata	*get_vectors_metadata_ptr(void)
{
	static bool					did_init = false;
	static t_vectors_metadata	vectors_metadata;

	if (!did_init)
	{
		did_init = true;
		vectors_metadata.metadata = malloc(sizeof(t_vector_metadata));
		vectors_metadata.metadata[0].size = 1;
		vectors_metadata.metadata[0].capacity = 1;
		vectors_metadata.metadata[0].element_size = sizeof(t_vector_metadata);
		vectors_metadata.metadata[0].address = vectors_metadata.metadata;
	}
	return (&vectors_metadata);
}

static t_vector_metadata	*vector_get_metadata(void *vector)
{
	t_vectors_metadata	*vectors_metadata;
	size_t				index;

	vectors_metadata = get_vectors_metadata_ptr();
	index = 0;
	while (index < vectors_metadata->metadata[0].size)
	{
		t_vector_metadata	*tmp = &vectors_metadata->metadata[index];
		(void)tmp;
		if (vectors_metadata->metadata[index].address == vector)
			return (&vectors_metadata->metadata[index]);
		index++;
	}
	return (NULL);
}

static void	vector_register(void *vector, size_t element_size, size_t capacity)
{
	t_vectors_metadata	*vectors_metadata;
	t_vector_metadata	metadata;

	vectors_metadata = get_vectors_metadata_ptr();
	vectors_metadata->metadata[0].size++;
	metadata.size = 0;
	metadata.capacity = capacity;
	metadata.element_size = element_size;
	metadata.address = vector;
	vector_push(&vectors_metadata->metadata, &metadata);
}

////////////////////////////////////////////////////////////////////////////////

void	*vector_new(size_t element_size)
{
	void	*vector;

	vector = malloc(VECTOR_DEFAULT_ELEMENT_CAPACITY * element_size);
	if (vector == NULL)
		return (NULL);
	vector_register(vector, element_size, VECTOR_DEFAULT_ELEMENT_CAPACITY);
	return (vector);
}

void	*vector_new_reserved(size_t element_size, size_t initial_capacity)
{
	void	*vector;

	vector = malloc(initial_capacity * element_size);
	if (vector == NULL)
		return (NULL);
	vector_register(vector, element_size, initial_capacity);
	return (vector);
}

void	vector_reserve(void *vector, size_t additional_elements)
{
	void				**vector_;
	t_vector_metadata	*metadata;
	size_t				new_capacity;

	vector_ = vector;
	metadata = vector_get_metadata(*vector_);
	metadata->capacity += additional_elements;
	new_capacity = metadata->capacity * metadata->element_size;
	// TODO: replace realloc with ft_realloc
	if (metadata == metadata->address)
	{
		metadata = realloc(metadata->address, new_capacity);
		metadata->address = metadata;
	}
	else
		metadata->address = realloc(metadata->address, new_capacity);
	*vector_ = metadata->address;
}

#include <string.h>

void	vector_push(void *vector, void *value_ptr)
{
	void				**vector_;
	t_vector_metadata	*metadata;
	size_t				element_size;
	size_t				pushed_value_offset;

	vector_ = vector;
	metadata = vector_get_metadata(*vector_);
	if (metadata->size >= metadata->capacity)
	{
		if (metadata->capacity == 0)
			vector_reserve(vector, 1);
		else
			vector_reserve(vector, metadata->capacity); // maybe *0.5 (because additional)
	}
	metadata = vector_get_metadata(*vector_);
	element_size = metadata->element_size;
	pushed_value_offset = metadata->size * element_size;
	// TODO: replace memcpy with ft_memcpy
	memcpy((*vector_) + pushed_value_offset, value_ptr, element_size);
	metadata->size++;
}

////////////////////////////////////////////////////////////////////////////////
