/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_push.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:06:29 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 16:57:03 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_vector.h"
#include "private/vector_push/ft_private_vector_push.h"

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
	t_u8		**_vector_ptr;
	t_metadata	*metadata_ptr;
	bool		_is_bookkeeping_vector;

	_vector_ptr = vector_ptr;
	metadata_ptr = get_metadata_ptr(*_vector_ptr);
	if (metadata_ptr == NULL)
		return (ERROR);
	if (metadata_ptr->size >= metadata_ptr->capacity)
	{
		_is_bookkeeping_vector = is_bookkeeping_vector(metadata_ptr);
		if (grow_vector_ptr(vector_ptr, metadata_ptr) != OK)
			return (ERROR);
		if (_is_bookkeeping_vector)
		{
			metadata_ptr = get_metadata_ptr(*_vector_ptr);
			if (metadata_ptr == NULL)
				return (ERROR);
		}
	}
	add_vector_value(metadata_ptr, *_vector_ptr, value_ptr);
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////
