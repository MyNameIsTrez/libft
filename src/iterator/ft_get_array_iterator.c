/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_array_iterator.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 12:19:09 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/28 12:44:20 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/iterator/ft_iterator.h"

#include <stddef.h>
#include <stdint.h>

t_iterator	ft_get_array_iterator(void *start, size_t count, size_t size)
{
	uintptr_t	stop;

	stop = ((uintptr_t)start) + count * size;
	return (ft_get_iterator((intptr_t)start, (intptr_t)stop, (intptr_t)size));
}
