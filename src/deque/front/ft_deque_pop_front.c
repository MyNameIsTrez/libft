/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_pop_front.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 15:17:08 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 15:17:08 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/deque/ft_deque.h"
#include "src/deque/ft_deque_struct.h"
#include "src/deque/private/ft_private_deque.h"

void	ft_deque_pop_front(t_deque *deque)
{
	deque->size--;
	deque->start_index = deque_get_wrapped_index(deque, 1);
}
