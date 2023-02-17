/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterate.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 11:33:55 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/08 12:51:53 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/iterator/ft_iterator.h"

////////////////////////////////////////////////////////////////////////////////

t_iterator_status	ft_iterate(t_iterator *it_ptr)
{
	if ((it_ptr->step > 0 && it_ptr->next < it_ptr->stop) || \
		(it_ptr->step < 0 && it_ptr->next > it_ptr->stop))
	{
		it_ptr->current = it_ptr->next;
		it_ptr->next += it_ptr->step;
		return (LOOPED);
	}
	it_ptr->current = it_ptr->start;
	it_ptr->initialized = false;
	return (FINISHED);
}

////////////////////////////////////////////////////////////////////////////////
