/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_bytes_allocated.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:39:11 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 14:40:09 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_private_mem_allocating.h"

size_t	ft_get_bytes_allocated(void)
{
	t_malloced	*malloced;
	size_t		index;
	size_t		bytes_allocated;

	malloced = get_malloced();
	if (malloced == NULL || malloced->malloc_ptrs == NULL)
		return (0);
	bytes_allocated = 0;
	index = 0;
	while (index < malloced->size)
	{
		bytes_allocated += malloced->malloc_ptrs[index].capacity;
		index++;
	}
	return (bytes_allocated);
}
