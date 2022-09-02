/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_pop_back.c                                :+:    :+:            */
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

#include "ft_deque.h"
#include "ft_deque_struct.h"

////////////////////////////////////////////////////////////////////////////////

void	ft_deque_pop_back(t_deque *deque)
{
	deque->size--;
}

////////////////////////////////////////////////////////////////////////////////
