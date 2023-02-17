/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_at.c                                      :+:    :+:            */
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

void	*ft_deque_at(t_deque *deque, size_t index)
{
	size_t	wrapped_index;

	wrapped_index = deque_get_wrapped_index(deque, (intptr_t)index);
	return (((t_u8 *)deque->data) + wrapped_index * deque->element_size);
}
