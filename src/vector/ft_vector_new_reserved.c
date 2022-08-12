/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_new_reserved.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:07:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/12 17:23:59 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

void	*ft_vector_new_reserved(size_t element_size, size_t initial_capacity)
{
	void	*vector;

	vector = ft_vector_new(element_size);
	if (vector == NULL)
		return (NULL);
	if (ft_vector_reserve(&vector, initial_capacity) != OK)
		return (NULL);
	return (vector);
}

////////////////////////////////////////////////////////////////////////////////
