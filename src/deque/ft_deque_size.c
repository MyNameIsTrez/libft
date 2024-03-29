/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_size.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 16:57:37 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 16:57:37 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/deque/ft_deque_struct.h"

size_t	ft_deque_size(t_deque *deque)
{
	return (deque->size);
}
