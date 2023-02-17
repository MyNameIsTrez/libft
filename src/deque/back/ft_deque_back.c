/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_back.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 17:14:47 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 17:14:47 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/deque/ft_deque.h"
#include "src/deque/ft_deque_struct.h"

void	*ft_deque_back(t_deque *deque)
{
	return (ft_deque_at(deque, deque->size - 1));
}
