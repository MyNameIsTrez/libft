/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_malloc_ptr.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 16:02:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 16:06:10 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/allocating/private/ft_private_mem_allocating.h"

////////////////////////////////////////////////////////////////////////////////

void	free_malloc_ptr(size_t index, t_malloced *malloced)
{
	void	**malloc_ptrs;

	malloc_ptrs = malloced->malloc_ptrs;
	if (index != malloced->size - 1)
		malloc_ptrs[index] = malloc_ptrs[malloced->size - 1];
	malloc_ptrs[malloced->size - 1] = NULL;
	malloced->size--;
}

////////////////////////////////////////////////////////////////////////////////
