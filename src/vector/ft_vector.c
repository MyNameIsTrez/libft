/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 09:57:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/22 12:26:22 by sbos          ########   odam.nl         */
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

static t_vector_metadata	**get_vector_of_metadata_ptr(void)
{
	static t_vector_metadata	*vector_of_metadata = NULL;

	if (vector_of_metadata == NULL)
	{
		vector_of_metadata = ft_malloc(sizeof(t_vector_metadata));
		if (vector_of_metadata == NULL)
			return (NULL);
		vector_of_metadata[0].size = 1;
		vector_of_metadata[0].capacity = 1;
		vector_of_metadata[0].element_size = sizeof(t_vector_metadata);
		vector_of_metadata[0].address = vector_of_metadata;
	}
	return (&vector_of_metadata);
}

static t_vector_metadata	*get_metadata(void *vector)
{
	t_vector_metadata	**vector_of_metadata;
	size_t				index;

	vector_of_metadata = get_vector_of_metadata_ptr();
	if (vector_of_metadata == NULL)
		return (NULL);
	index = 0;
	while (index < (*vector_of_metadata)[0].size)
	{
		if ((*vector_of_metadata)[index].address == vector)
			return (&(*vector_of_metadata)[index]);
		index++;
	}
	return (NULL);
}

static t_status	vector_register(void *vector, size_t element_size,
			size_t capacity)
{
	t_vector_metadata	**vector_of_metadata;
	t_vector_metadata	metadata;

	vector_of_metadata = get_vector_of_metadata_ptr();
	if (vector_of_metadata == NULL)
		return (ft_set_error(FT_ERROR_MALLOC));
	metadata.size = 0;
	metadata.capacity = capacity;
	metadata.element_size = element_size;
	metadata.address = vector;
	return (vector_push(vector_of_metadata, &metadata));
}

static size_t	get_bytes_after_metadata(t_vector_metadata *metadata,
			t_vector_metadata **vector_of_metadata, size_t element_size)
{
	size_t	metadata_index;
	size_t	total_elements;
	size_t	shifted_elements;

	metadata_index = (size_t)(metadata - (*vector_of_metadata));
	total_elements = (*vector_of_metadata)[0].size;
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

	vector = ft_malloc(VECTOR_DEFAULT_ELEMENT_CAPACITY * element_size);
	if (vector == NULL)
		return (NULL);
	if (vector_register(vector, element_size,
			VECTOR_DEFAULT_ELEMENT_CAPACITY) != OK)
		return (NULL);
	return (vector);
}

void	*vector_new_reserved(size_t element_size, size_t initial_capacity)
{
	void	*vector;

	vector = ft_malloc(initial_capacity * element_size);
	if (vector == NULL)
		return (NULL);
	if (vector_register(vector, element_size, initial_capacity) != OK)
		return (NULL);
	return (vector);
}

t_status	vector_reserve(void *vector_ptr, size_t additional_elements)
{
	void				**_vector_ptr;
	t_vector_metadata	*metadata;
	t_vector_metadata	*temp_metadata;
	size_t				old_capacity;
	size_t				new_capacity;

	_vector_ptr = vector_ptr;
	metadata = get_metadata(*_vector_ptr);
	if (metadata == NULL)
		return (ft_set_error(FT_ERROR_MALLOC));
	old_capacity = metadata->capacity * metadata->element_size;
	new_capacity = old_capacity + additional_elements * metadata->element_size;
	if (is_lookup_vector(metadata))
	{
		temp_metadata = ft_realloc(metadata->address, old_capacity, \
									new_capacity);
		metadata = temp_metadata;
	}
	else
		temp_metadata = ft_realloc(metadata->address, old_capacity, \
			new_capacity);
	if (temp_metadata == NULL)
		return (ft_set_error(FT_ERROR_MALLOC));
	metadata->address = temp_metadata;
	*_vector_ptr = metadata->address;
	metadata->capacity += additional_elements;
	return (OK);
}

/**
 * @brief Note that when you have nested vectors,
 * vector_push(&inner_vector, &v) doesn't work
 * since whenever inner_vector is realloced,
 * outer_vector wouldn't be aware inner_vector its address moved.
 * You can either use vector_push_new_vector() or
 * vector_push(&outer_vector[inner_vector_index], &v).
 *
 * @param vector_ptr
 * @param value_ptr
 * @return
 */
t_status	vector_push(void *vector_ptr, void *value_ptr)
{
	void				**_vector_ptr;
	t_vector_metadata	*metadata;
	size_t				element_size;
	size_t				pushed_value_offset;
	bool				_is_lookup_vector;

	_vector_ptr = vector_ptr;
	metadata = get_metadata(*_vector_ptr);
	if (metadata == NULL)
		return (ft_set_error(FT_ERROR_MALLOC));
	if (metadata->size >= metadata->capacity)
	{
		_is_lookup_vector = is_lookup_vector(metadata);
		if (metadata->capacity == 0)
			vector_reserve(vector_ptr, 1);
		else
			vector_reserve(vector_ptr, metadata->capacity);
		if (ft_any_error() != OK)
			return (ERROR);
		if (_is_lookup_vector)
		{
			metadata = get_metadata(*_vector_ptr);
			if (metadata == NULL)
				return (ft_set_error(FT_ERROR_MALLOC));
		}
	}
	element_size = metadata->element_size;
	pushed_value_offset = metadata->size * element_size;
	ft_memcpy((*_vector_ptr) + pushed_value_offset, value_ptr, element_size);
	metadata->size++;
	return (OK);
}

/**
 * @brief Doesn't free vector contents, only the vector itself.
 *
 * @param vector
 * @return Can return ERROR only when creating a vector since the most recent
 * vector cleanup (or program start) failed. So, you should never have
 * to check the return value of this function if you guard all previous calls.
 */
t_status	vector_free(void *vector)
{
	t_vector_metadata	**vector_of_metadata;
	t_vector_metadata	*metadata;
	size_t				element_size;

	// TODO: Make vector_of_metadata single ptr
	vector_of_metadata = get_vector_of_metadata_ptr();
	if (vector_of_metadata == NULL)
		return (ft_set_error(FT_ERROR_MALLOC));
	metadata = get_metadata(vector);
	ft_free(&vector);
	if (metadata == NULL)
		return (ft_set_error(FT_ERROR_MALLOC));
	element_size = (*vector_of_metadata)[0].element_size;
	ft_memmove(metadata, metadata + element_size, \
		get_bytes_after_metadata(metadata, vector_of_metadata, element_size));
	(*vector_of_metadata)[0].size--;
	return (OK);
}

/**
 * @brief Doesn't free vector contents, only the vectors themselves.
 *
 * @return Can return ERROR only when creating a vector since the most recent
 * vector cleanup (or program start) failed. So, you should never have
 * to check the return value of this function if you guard all previous calls.
 */
t_status	vector_clean_up(void)
{
	t_vector_metadata	**vector_of_metadata;
	size_t				index;

	vector_of_metadata = get_vector_of_metadata_ptr();
	if (vector_of_metadata == NULL)
		return (ft_set_error(FT_ERROR_MALLOC));
	index = 1;
	while (index < (*vector_of_metadata)[0].size)
	{
		ft_free(&(*vector_of_metadata)[index].address);
		index++;
	}
	ft_free(vector_of_metadata);
	*vector_of_metadata = NULL;
	return (OK);
}

t_status	vector_push_new_vector(void *vector_ptr, size_t inner_element_size)
{
	void	*new_vector;

	new_vector = vector_new(inner_element_size);
	if (new_vector == NULL)
		return (ft_set_error(FT_ERROR_MALLOC));
	return (vector_push(vector_ptr, &new_vector));
}

////////////////////////////////////////////////////////////////////////////////
