/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   deque_at_wrapping.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 15:28:52 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 15:28:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/deque/ft_deque_struct.h"
#include "src/deque/private/ft_private_deque.h"
#include "src/helper_headers/ft_types.h"

#include <stdint.h>

void	*deque_at_wrapping(t_deque *deque, intptr_t index)
{
	size_t	wrapped_index;

	wrapped_index = deque_get_wrapped_index(deque, index);
	return (((t_u8 *)deque->data) + wrapped_index * deque->element_size);
}
