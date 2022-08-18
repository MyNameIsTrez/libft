/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_swap_remove.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:04:30 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/18 14:01:43 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

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
	ft_memmove((t_u8 *)*_vector_ptr + index * element_size, \
		(t_u8 *)*_vector_ptr + (metadata_ptr->size - 1) * element_size, element_size);
	metadata_ptr->size--;
}

////////////////////////////////////////////////////////////////////////////////
