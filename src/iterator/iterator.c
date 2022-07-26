/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iterator.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 11:33:55 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/26 14:29:19 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_iterator_status	ft_iterate(t_iterator *it_ptr)
{
	intptr_t	next_value;
	intptr_t	stop;

	next_value = (intptr_t)it_ptr->current + it_ptr->step;
	stop = (intptr_t)it_ptr->stop;
	if (it_ptr->step > 0)
	{
		while (next_value < stop)
		{
			it_ptr->current += it_ptr->step;
			return (LOOPED);
		}
	}
	else
	{
		while (next_value > stop)
		{
			it_ptr->current += it_ptr->step;
			return (LOOPED);
		}
	}
	// TODO: Reset iterator?
	return (FINISHED);
}

////////////////////////////////////////////////////////////////////////////////
