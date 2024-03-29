/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_iterator.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 12:26:12 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/08 12:49:20 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/iterator/ft_iterator.h"

t_iterator	ft_get_iterator(intptr_t start, intptr_t stop, intptr_t step)
{
	t_iterator	it;

	it.start = start;
	it.current = it.start;
	it.next = it.current;
	it.stop = stop;
	it.step = step;
	it.initialized = true;
	return (it);
}
