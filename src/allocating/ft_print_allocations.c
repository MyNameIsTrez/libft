/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_allocations.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/17 20:21:01 by sbos          #+#    #+#                 */
/*   Updated: 2023/03/17 20:21:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_private_mem_allocating.h"

#include <stdio.h>

void	ft_print_allocations(void)
{
	t_malloced		*malloced;
	size_t			i;
	t_single_malloc	m;

	malloced = get_malloced();
	if (malloced == NULL || malloced->malloc_ptrs == NULL)
		return ;
	i = 0;
	while (i < malloced->size)
	{
		m = malloced->malloc_ptrs[i];
		printf("%zu bytes capacity of count %zu and size %zu at address %p\n",
			m.capacity, m.count, m.size, m.ptr);
		i++;
	}
}
