/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 09:57:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/20 14:29:09 by sbos          ########   odam.nl         */
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

static t_vector_metadata	**get_vectors_metadata_ptr(void)
{
	static t_vector_metadata	*vectors_metadata = NULL;

	if (vectors_metadata == NULL)
	{
		vectors_metadata = malloc(sizeof(t_vector_metadata));
		vectors_metadata[0].size = 1;
		vectors_metadata[0].capacity = 1;
		vectors_metadata[0].element_size = sizeof(t_vector_metadata);
		vectors_metadata[0].address = vectors_metadata;
	}
	return (&vectors_metadata);
}

static t_vector_metadata	*vector_get_metadata(void *vector)
{
	t_vector_metadata	**vectors_metadata;
	size_t				index;

	vectors_metadata = get_vectors_metadata_ptr();
	index = 0;
	while (index < (*vectors_metadata)[0].size)
	{
		if ((*vectors_metadata)[index].address == vector)
			return (&(*vectors_metadata)[index]);
		index++;
	}
	return (NULL);
}

static void	vector_register(void *vector, size_t element_size, size_t capacity)
{
	t_vector_metadata	**vectors_metadata;
	t_vector_metadata	metadata;

	vectors_metadata = get_vectors_metadata_ptr();
	metadata.size = 0;
	metadata.capacity = capacity;
	metadata.element_size = element_size;
	metadata.address = vector;
	vector_push(vectors_metadata, &metadata);
}

static size_t	get_bytes_after_metadata(t_vector_metadata *metadata,
			t_vector_metadata **vectors_metadata, size_t element_size)
{
	size_t	metadata_index;
	size_t	total_elements;
	size_t	shifted_elements;

	metadata_index = (size_t)(metadata - (*vectors_metadata));
	total_elements = (*vectors_metadata)[0].size;
	shifted_elements = metadata_index + 1;
	return ((total_elements - shifted_elements) * element_size);
}

static bool	is_lookup_vector(t_vector_metadata *metadata)
{
	return (metadata == metadata->address);
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

void	vector_reserve(void *vector_ptr, size_t additional_elements)
{
	void				**_vector_ptr;
	t_vector_metadata	*metadata;
	size_t				new_capacity;

	_vector_ptr = vector_ptr;
	metadata = vector_get_metadata(*_vector_ptr);
	metadata->capacity += additional_elements;
	new_capacity = metadata->capacity * metadata->element_size;
	// TODO: replace realloc with ft_realloc
	if (is_lookup_vector(metadata))
	{
		metadata = realloc(metadata->address, new_capacity);
		metadata->address = metadata;
	}
	else
		metadata->address = realloc(metadata->address, new_capacity);
	*_vector_ptr = metadata->address;
}

#include <string.h>

void	vector_push(void *vector_ptr, void *value_ptr)
{
	void				**_vector_ptr;
	t_vector_metadata	*metadata;
	size_t				element_size;
	size_t				pushed_value_offset;
	bool				_is_lookup_vector;

	_vector_ptr = vector_ptr;
	metadata = vector_get_metadata(*_vector_ptr);
	if (metadata->size >= metadata->capacity)
	{
		_is_lookup_vector = false;
		if (is_lookup_vector(metadata))
			_is_lookup_vector = true;
		if (metadata->capacity == 0)
			vector_reserve(vector_ptr, 1);
		else
			vector_reserve(vector_ptr, metadata->capacity); // maybe *0.5 (because additional)
		if (_is_lookup_vector)
			metadata = vector_get_metadata(*_vector_ptr);
	}
	element_size = metadata->element_size;
	pushed_value_offset = metadata->size * element_size;
	// TODO: replace memcpy with ft_memcpy
	memcpy((*_vector_ptr) + pushed_value_offset, value_ptr, element_size);
	metadata->size++;
}

void	vector_free(void *vector)
{
	t_vector_metadata	**vectors_metadata;
	t_vector_metadata	*metadata;
	size_t				element_size;

	free(vector);
	// TODO: Make vectors_metadata single ptr
	vectors_metadata = get_vectors_metadata_ptr();
	metadata = vector_get_metadata(vector);
	element_size = (*vectors_metadata)[0].element_size;
	ft_memmove(metadata, metadata + element_size, \
		get_bytes_after_metadata(metadata, vectors_metadata, element_size));
	(*vectors_metadata)[0].size--;
}

void	vector_clean_up(void)
{
	t_vector_metadata	**vectors_metadata;
	size_t				index;

	vectors_metadata = get_vectors_metadata_ptr();
	index = 1;
	while (index < (*vectors_metadata)[0].size)
	{
		free((*vectors_metadata)[index].address);
		index++;
	}
	free(*vectors_metadata);
	*vectors_metadata = NULL;
}

////////////////////////////////////////////////////////////////////////////////
