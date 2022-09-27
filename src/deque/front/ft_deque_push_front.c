/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_push_front.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 15:17:08 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 15:17:08 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "../ft_deque.h"
#include "../ft_deque_struct.h"
#include "deque/private/ft_private_deque.h"

////////////////////////////////////////////////////////////////////////////////

// TODO: Remalloc when pushing past the start
t_status	ft_deque_push_front(t_deque *deque, void *value_ptr)
{
	ft_memcpy(deque_at_wrapping(deque, -1), value_ptr, deque->element_size);
	deque->size++;
	deque->start_index = deque_get_wrapped_index(deque, -1);
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////
