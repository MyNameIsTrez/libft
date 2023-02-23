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

#include "src/allocating/ft_allocating.h"
#include "src/vector/ft_vector.h"
#include "src/vector/private/ft_private_vector.h"
#include "src/vector/private/metadata/ft_private_vector_metadata.h"

#include <stddef.h>

t_vector_	ft_vector_new(size_t element_size)
{
	t_vector_	vector;

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
