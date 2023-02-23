/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_from_deque.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 16:11:58 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 16:11:58 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/deque/ft_deque_struct.h"
#include "src/vector/ft_vector.h"

t_vector_	ft_vector_from_deque(t_deque *deque)
{
	t_vector_	vector;
	size_t		i;

	vector = ft_vector_new_reserved(deque->element_size, deque->size);
	if (vector == NULL)
		return (NULL);
	i = 0;
	while (i < deque->size)
	{
		ft_vector_push(&vector, ft_deque_at(deque, i));
		i++;
	}
	return (vector);
}
