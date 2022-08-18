/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:05:07 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/18 13:50:45 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Passing an empty/invalid `vector_ptr` is UB.
 *
 * @param vector
 * @return
 */
void	*ft_vector_back(void *vector)
{
	t_metadata	*metadata_ptr;
	t_u8		*_vector;

	metadata_ptr = get_metadata_ptr(vector);
	_vector = vector;
	return (&_vector[(metadata_ptr->size - 1) * metadata_ptr->element_size]);
}

////////////////////////////////////////////////////////////////////////////////
