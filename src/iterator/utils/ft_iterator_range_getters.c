/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterator_range_getters.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 11:42:03 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/26 15:10:41 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_iterator	ft_get_step_range_iterator(t_i32 start, t_i32 stop, t_i32 step)
{
	t_iterator	it;

	it.current = (intptr_t)start;
	it.next = it.current;
	it.stop = (intptr_t)stop;
	it.step = step;
	return (it);
}

t_iterator	ft_get_range_iterator(t_i32 start, t_i32 stop)
{
	return (ft_get_step_range_iterator(start, stop, 1));
}

t_iterator	ft_get_range_start_0_iterator(t_i32 stop)
{
	return (ft_get_range_iterator(0, stop));
}

////////////////////////////////////////////////////////////////////////////////
