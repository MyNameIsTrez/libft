/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_copy.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 15:45:11 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 16:39:24 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Returns a copy of @p vector. Copies up to size, not capacity.
 *
 * @param vector
 * @return void*
 */
void	*ft_vector_copy(void *vector)
{
	t_metadata	*vector_metadata_ptr;
	size_t		element_size;
	size_t		size;
	void		*vector2;

	vector_metadata_ptr = get_metadata_ptr(vector);
	if (vector_metadata_ptr == NULL)
		return (NULL);
	element_size = vector_metadata_ptr->element_size;
	size = vector_metadata_ptr->size;
	vector2 = ft_vector_new_reserved(element_size, size);
	if (vector2 == NULL)
		return (NULL);
	ft_memcpy(vector2, vector, element_size * size);
	get_metadata_ptr(vector2)->size = size;
	return (vector2);
}

////////////////////////////////////////////////////////////////////////////////
