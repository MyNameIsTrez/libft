/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iterator.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 11:33:55 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/26 15:56:25 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_iterator_status	ft_iterate(t_iterator *it_ptr)
{
	if ((it_ptr->step > 0 && it_ptr->next < it_ptr->stop) || \
		(it_ptr->step < 0 && it_ptr->next > it_ptr->stop))
	{
		it_ptr->current = it_ptr->next;
		it_ptr->next = it_ptr->current + it_ptr->step;
		return (LOOPED);
	}
	// TODO: Reset iterator?
	return (FINISHED);
}

////////////////////////////////////////////////////////////////////////////////
