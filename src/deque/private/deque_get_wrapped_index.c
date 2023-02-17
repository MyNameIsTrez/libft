/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   deque_get_wrapped_index.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/19 15:26:12 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/19 15:26:12 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "deque/ft_deque_struct.h"

#include <stdint.h>

////////////////////////////////////////////////////////////////////////////////

size_t	deque_get_wrapped_index(t_deque *deque, intptr_t index)
{
	size_t	unwrapped_index;

	unwrapped_index = (size_t)((intptr_t)deque->start_index + index
			+ (intptr_t)deque->capacity);
	return (unwrapped_index % deque->capacity);
}

////////////////////////////////////////////////////////////////////////////////
