/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_malloc_ptr_index.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 15:22:51 by sbos          #+#    #+#                 */
/*   Updated: 2023/03/20 15:22:51 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_private_mem_allocating.h"

#include <sys/types.h>

ssize_t	find_malloc_ptr_index(void *ptr)
{
	t_malloced	*malloced;
	size_t		index;

	malloced = get_malloced();
	if (malloced != NULL)
	{
		index = 0;
		while (index < malloced->size)
		{
			if (malloced->malloc_ptrs[index].ptr == ptr)
				return ((ssize_t)index);
			index++;
		}
	}
	return (-1);
}
