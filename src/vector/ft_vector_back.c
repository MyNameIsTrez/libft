/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:05:07 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 17:14:43 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"
#include "src/vector/private/ft_private_vector.h"
#include "src/vector/private/metadata/metadata_getters/\
ft_private_vector_metadata_getters.h"
#include "src/vector/ft_vector.h"

/**
 * @brief Passing an empty/invalid @p vector is UB.
 *
 * @param vector
 * @return
 */
void	*ft_vector_back(t_vector vector)
{
	t_metadata	*metadata_ptr;
	t_u8		*_vector;

	metadata_ptr = get_metadata_ptr(vector);
	_vector = vector;
	return (&_vector[(metadata_ptr->size - 1) * metadata_ptr->element_size]);
}
