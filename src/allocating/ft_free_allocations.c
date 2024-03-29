/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_allocations.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 13:32:04 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 14:31:17 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_private_mem_allocating.h"
#include "src/vector/ft_vector.h"

#include <stdlib.h>

void	ft_free_allocations(void)
{
	t_malloced	*malloced;

	ft_vector_clean_up();
	malloced = get_malloced();
	if (malloced == NULL)
		return ;
	while (malloced->size > 0)
	{
		malloced->size--;
		free(malloced->malloc_ptrs[malloced->size].ptr);
	}
	free(malloced->malloc_ptrs);
	malloced->malloc_ptrs = NULL;
	malloced->capacity = 0;
}
