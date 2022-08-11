/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_new_reserved.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:07:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:16:38 by sbos          ########   odam.nl         */
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

	vector = ft_malloc(initial_capacity, element_size);
	if (vector == NULL)
		return (NULL);
	if (try_init_vector_of_metadata_ptr() != OK)
		return (NULL);
	if (vector_register(vector, element_size, initial_capacity) != OK)
		return (NULL);
	return (vector);
}

////////////////////////////////////////////////////////////////////////////////
