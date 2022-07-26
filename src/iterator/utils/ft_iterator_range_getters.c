/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterator_range_getters.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 11:42:03 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/26 12:36:11 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_iterator	ft_get_step_range_iterator(t_i32 start, t_i32 end, t_i32 step)
{
	t_iterator	it;

	it.current = (t_u8 *)(uintptr_t)start;
	it.end = (t_u8 *)(uintptr_t)end;
	it.step = step;
	return (it);
}

t_iterator	ft_get_range_iterator(t_i32 start, t_i32 end)
{
	return (ft_get_step_range_iterator(start, end, 1));
}

t_iterator	ft_get_0_range_iterator(t_i32 end)
{
	return (ft_get_range_iterator(0, end));
}

////////////////////////////////////////////////////////////////////////////////
