/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_push_new_vector.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:05:39 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:16:50 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/vector/ft_vector.h"
#include "src/vector/private/ft_private_vector.h"

#include <stddef.h>

t_status	ft_vector_push_new_vector(t_vector_ptr vector_ptr,
				size_t inner_element_size)
{
	t_vector_	new_vector;

	new_vector = ft_vector_new(inner_element_size);
	if (new_vector == NULL)
		return (ERROR);
	return (ft_vector_push(vector_ptr, &new_vector));
}
