/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:05:07 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:14:57 by sbos          ########   odam.nl         */
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

	metadata_ptr = get_metadata_ptr(vector);
	return (&vector[(metadata_ptr->size - 1) * metadata_ptr->element_size]);
}

////////////////////////////////////////////////////////////////////////////////
