/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_new.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:07:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:08:39 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

void	*ft_vector_new(size_t element_size)
{
	void	*vector;

	vector = ft_malloc(VECTOR_DEFAULT_ELEMENT_CAPACITY, element_size);
	if (vector == NULL)
		return (NULL);
	if (try_init_vector_of_metadata_ptr() != OK)
		return (NULL);
	if (vector_register(vector, element_size,
			VECTOR_DEFAULT_ELEMENT_CAPACITY) != OK)
		return (NULL);
	return (vector);
}

////////////////////////////////////////////////////////////////////////////////
