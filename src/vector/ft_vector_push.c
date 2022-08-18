/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_push.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:06:29 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/18 13:54:44 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

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
			ft_vector_reserve(vector_ptr, 2 * metadata_ptr->capacity);
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
	ft_memmove(((t_u8 *)*_vector_ptr) + pushed_value_offset, value_ptr, element_size);
	metadata_ptr->size++;
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////
