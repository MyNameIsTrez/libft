/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 09:57:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 15:14:18 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Calling this before `try_init_vector_of_metadata_ptr()` is UB.
 *
 * @param vector
 * @param element_size
 * @param capacity
 * @return
 */
STATIC t_status	vector_register(void *vector, size_t element_size,
					size_t capacity)
{
	t_metadata	**vector_of_metadata_ptr;
	t_metadata	metadata;

	vector_of_metadata_ptr = get_vector_of_metadata_ptr();
	metadata.size = 0;
	metadata.capacity = capacity;
	metadata.element_size = element_size;
	metadata.address = vector;
	return (ft_vector_push(vector_of_metadata_ptr, &metadata));
}

STATIC bool	is_bookkeeping_vector(t_metadata *metadata_ptr)
{
	return (metadata_ptr == metadata_ptr->address);
}

////////////////////////////////////////////////////////////////////////////////

void	*ft_vector_new(size_t element_size)
{
	void	*vector;

	vector = ft_malloc(VECTOR_DEFAULT_ELEMENT_CAPACITY, element_size);
	if (vector == NULL)
		return (NULL);
	if (try_init_vector_of_metadata_ptr() != OK)
		return (NULL);
	if (vector_register(vector, element_size,
			VECTOR_DEFAULT_ELEMENT_CAPACITY) != OK)
		return (NULL);
	return (vector);
}

void	*ft_vector_new_reserved(size_t element_size, size_t initial_capacity)
{
	void	*vector;

	vector = ft_malloc(initial_capacity, element_size);
	if (vector == NULL)
		return (NULL);
	if (try_init_vector_of_metadata_ptr() != OK)
		return (NULL);
	if (vector_register(vector, element_size, initial_capacity) != OK)
		return (NULL);
	return (vector);
}

t_status	ft_vector_reserve(void *vector_ptr, size_t additional_elements)
{
	void		**_vector_ptr;
	t_metadata	*metadata_ptr;
	t_metadata	*temp_metadata_ptr;
	size_t		old_count;
	size_t		new_count;

	_vector_ptr = vector_ptr;
	metadata_ptr = get_metadata_ptr(*_vector_ptr);
	if (metadata_ptr == NULL)
		return (ERROR);
	old_count = metadata_ptr->capacity;
	new_count = old_count + additional_elements;
	temp_metadata_ptr = ft_remalloc(metadata_ptr->address, old_count, \
							new_count, metadata_ptr->element_size);
	if (is_bookkeeping_vector(metadata_ptr))
		metadata_ptr = temp_metadata_ptr;
	if (temp_metadata_ptr == NULL)
		return (ERROR);
	metadata_ptr->address = temp_metadata_ptr;
	*_vector_ptr = metadata_ptr->address;
	metadata_ptr->capacity += additional_elements;
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
t_status	ft_vector_push(void *vector_ptr, void *value_ptr)
{
	void		**_vector_ptr;
	t_metadata	*metadata_ptr;
	size_t		element_size;
	size_t		pushed_value_offset;
	bool		_is_bookkeeping_vector;

	_vector_ptr = vector_ptr;
	metadata_ptr = get_metadata_ptr(*_vector_ptr);
	if (metadata_ptr == NULL)
		return (ERROR);
	if (metadata_ptr->size >= metadata_ptr->capacity)
	{
		_is_bookkeeping_vector = is_bookkeeping_vector(metadata_ptr);
		if (metadata_ptr->capacity == 0)
			ft_vector_reserve(vector_ptr, 1);
		else
			ft_vector_reserve(vector_ptr, metadata_ptr->capacity);
		if (ft_any_error() != OK)
			return (ERROR);
		if (_is_bookkeeping_vector)
		{
			metadata_ptr = get_metadata_ptr(*_vector_ptr);
			if (metadata_ptr == NULL)
				return (ERROR);
		}
	}
	element_size = metadata_ptr->element_size;
	pushed_value_offset = metadata_ptr->size * element_size;
	ft_memmove((*_vector_ptr) + pushed_value_offset, value_ptr, element_size);
	metadata_ptr->size++;
	return (OK);
}

/**
 * @brief Doesn't ft_free vector contents, only the `vector_ptr` itself,
 * along with its metadata.
 *
 * @param vector
 * @return
 */
void	ft_vector_free(void *vector_ptr)
{
	void		**_vector_ptr;
	t_metadata	*metadata_ptr;
	t_metadata	*vector_of_metadata;
	size_t		element_size;

	_vector_ptr = vector_ptr;
	if (*_vector_ptr == NULL)
		return ;
	metadata_ptr = get_metadata_ptr(*_vector_ptr);
	ft_free(_vector_ptr);
	if (metadata_ptr == NULL)
		return ;
	vector_of_metadata = get_vector_of_metadata();
	element_size = vector_of_metadata[0].element_size;
	// TODO: Use swapping for freeing stuff?
	ft_memmove(metadata_ptr, metadata_ptr + element_size, \
		get_bytes_after_metadata(metadata_ptr, element_size));
	vector_of_metadata[0].size--;
}

/**
 * @brief Doesn't free vector contents, only the vectors,
 * along with their metadata.
 *
 * @return
 */
void	ft_vector_clean_up(void)
{
	t_metadata	**vector_of_metadata_ptr;
	size_t		index;

	vector_of_metadata_ptr = get_vector_of_metadata_ptr();
	if (*vector_of_metadata_ptr == NULL)
		return ;
	index = 1;
	while (index < (*vector_of_metadata_ptr)[0].size)
	{
		ft_free(&(*vector_of_metadata_ptr)[index].address);
		index++;
	}
	ft_free(vector_of_metadata_ptr);
	*vector_of_metadata_ptr = NULL;
}

t_status	ft_vector_push_new_vector(void *vector_ptr,
				size_t inner_element_size)
{
	void	*new_vector;

	new_vector = ft_vector_new(inner_element_size);
	if (new_vector == NULL)
		return (ERROR);
	return (ft_vector_push(vector_ptr, &new_vector));
}

/**
 * @brief Passing an invalid `vector_ptr` is UB.
 *
 * @param vector
 * @return
 */
size_t	ft_vector_get_size(void *vector)
{
	return (get_metadata_ptr(vector)->size);
}

/**
 * @brief Passing an empty/invalid `vector_ptr` is UB.
 *
 * @param vector
 * @return
 */
void	*ft_vector_back(void *vector)
{
	t_metadata	*metadata_ptr;

	metadata_ptr = get_metadata_ptr(vector);
	return (&vector[(metadata_ptr->size - 1) * metadata_ptr->element_size]);
}

/**
 * @brief Passing an empty/invalid `vector_ptr` is UB.
 *
 * @param vector_ptr
 * @return
 */
void	ft_vector_pop_back(void *vector_ptr)
{
	void		**_vector_ptr;

	_vector_ptr = vector_ptr;
	get_metadata_ptr(*_vector_ptr)->size--;
}

/**
 * @brief Passing an `index` that is out of bounds is UB.
 *
 * @param vector_ptr
 * @param index
 */
void	ft_vector_swap_remove(void *vector_ptr, size_t index)
{
	void		**_vector_ptr;
	t_metadata	*metadata_ptr;
	size_t		element_size;

	_vector_ptr = vector_ptr;
	metadata_ptr = get_metadata_ptr(*_vector_ptr);
	element_size = metadata_ptr->element_size;
	ft_memmove(*_vector_ptr + index * element_size, \
		*_vector_ptr + (metadata_ptr->size - 1) * element_size, element_size);
	metadata_ptr->size--;
}

// /**
//  * @brief
//  *
//  * @param vector_ptr
//  * @param index
//  * @return
//  */
// void	ft_vector_remove(void *vector_ptr, size_t index)
// {
// 	return (OK);
// }

////////////////////////////////////////////////////////////////////////////////
