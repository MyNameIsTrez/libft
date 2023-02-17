/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_new_reserved.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 14:57:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 14:57:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "ft_deque_struct.h"
#include "allocating/ft_allocating.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief The minimum @p initial_capacity is 1.
 *
 * @param element_size
 * @param initial_capacity
 * @return t_deque*
 */
t_deque	*ft_deque_new_reserved(size_t element_size, size_t initial_capacity)
{
	t_deque	*deque;

	if (initial_capacity < 1)
		return (NULL);
	deque = ft_malloc(1, sizeof(t_deque));
	if (deque == NULL)
		return (NULL);
	deque->data = ft_malloc(initial_capacity, element_size);
	if (deque->data == NULL)
	{
		ft_free(&deque);
		return (NULL);
	}
	deque->capacity = initial_capacity;
	deque->element_size = element_size;
	deque->size = 0;
	deque->start_index = 0;
	return (deque);
}

////////////////////////////////////////////////////////////////////////////////
