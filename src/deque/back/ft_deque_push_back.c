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

#include "src/deque/ft_deque.h"
#include "src/deque/ft_deque_struct.h"
#include "src/error/ft_error.h"
#include "src/mem/ft_mem.h"

// TODO: Remalloc when pushing past the end
t_status	ft_deque_push_back(t_deque *deque, void *value_ptr)
{
	ft_memcpy(ft_deque_at(deque, deque->size), value_ptr, deque->element_size);
	deque->size++;
	return (OK);
}
