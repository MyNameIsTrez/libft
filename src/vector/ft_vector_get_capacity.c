/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_get_capacity.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:05:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 17:14:57 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/vector/ft_vector.h"
#include "src/vector/private/ft_private_vector.h"
#include "src/vector/private/metadata/metadata_getters/\
ft_private_vector_metadata_getters.h"

/**
 * @brief Passing an invalid @p vector is UB.
 *
 * @param vector
 * @return
 */
size_t	ft_vector_get_capacity(t_vector vector)
{
	return (get_metadata_ptr(vector)->capacity);
}
