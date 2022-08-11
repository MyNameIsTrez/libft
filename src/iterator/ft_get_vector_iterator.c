/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_vector_iterator.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/29 20:14:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 14:02:13 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_iterator	ft_get_vector_iterator(void *vector)
{
	void	*start;
	size_t	count;
	size_t	element_size;

	start = vector;
	count = ft_vector_get_size(vector);
	element_size = vector_get_element_size(vector);
	return (ft_get_array_iterator(start, count, element_size));
}

////////////////////////////////////////////////////////////////////////////////
