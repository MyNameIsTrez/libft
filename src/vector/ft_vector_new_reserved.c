/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_new_reserved.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:07:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 17:22:37 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/vector/private/ft_private_vector.h"
#include "src/vector/ft_vector.h"

#include <stddef.h>

/**
 * @brief The minimum @p initial_capacity is 1.
 *
 * @param element_size
 * @param initial_capacity
 * @return
 */
void	*ft_vector_new_reserved(size_t element_size, size_t initial_capacity)
{
	void	*vector;

	if (initial_capacity < 1)
		return (NULL);
	vector = ft_vector_new(element_size);
	if (vector == NULL)
		return (NULL);
	if (ft_vector_reserve(&vector, initial_capacity) != OK)
		return (NULL);
	return (vector);
}
