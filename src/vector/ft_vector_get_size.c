/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_get_size.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:05:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 17:14:57 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Passing an invalid @p vector_ptr is UB.
 *
 * @param vector
 * @return
 */
size_t	ft_vector_get_size(void *vector)
{
	return (get_metadata_ptr(vector)->size);
}

////////////////////////////////////////////////////////////////////////////////
