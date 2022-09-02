/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_push_back.c                               :+:    :+:            */
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

#include "ft_deque_struct.h"

////////////////////////////////////////////////////////////////////////////////

t_status	ft_deque_push_back(t_deque *deque, void *value_ptr)
{
	void	*dst;

	// TODO: Remalloc when pushing past the end
	dst = ((t_u8 *)deque->data) + (deque->start_index + deque->size) * deque->element_size;
	ft_memcpy(dst, value_ptr, deque->element_size);
	deque->size++;
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////
