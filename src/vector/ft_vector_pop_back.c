/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_pop_back.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:04:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 17:15:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/vector/private/ft_private_vector.h"
#include "src/vector/private/metadata/metadata_getters/\
ft_private_vector_metadata_getters.h"

/**
 * @brief Passing an empty/invalid @p vector_ptr is UB.
 *
 * @param vector_ptr
 * @return
 */
void	ft_vector_pop_back(void *vector_ptr)
{
	void	**_vector_ptr;

	_vector_ptr = vector_ptr;
	get_metadata_ptr(*_vector_ptr)->size--;
}
