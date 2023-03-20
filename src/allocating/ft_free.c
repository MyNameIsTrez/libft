/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 13:27:37 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 16:42:02 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_private_mem_allocating.h"

#include <stdlib.h>
#include <sys/types.h>

static void	free_malloc_ptr(void *ptr)
{
	ssize_t			index;
	t_malloced		*malloced;
	t_single_malloc	*malloc_ptrs;

	index = find_malloc_ptr_index(ptr);
	if (index == -1)
		return ;
	malloced = get_malloced();
	if (malloced == NULL)
		return ;
	// TODO: Refactor so malloc_ptrs is replaced with malloc_ptr
	malloc_ptrs = malloced->malloc_ptrs;
	if ((size_t)index != malloced->size - 1)
		malloc_ptrs[index] = malloc_ptrs[malloced->size - 1];
	malloc_ptrs[malloced->size - 1].ptr = NULL;
	malloc_ptrs[malloced->size - 1].count = 0;
	malloc_ptrs[malloced->size - 1].size = 0;
	malloc_ptrs[malloced->size - 1].capacity = 0;
	malloc_ptrs[malloced->size - 1].description = NULL;
	malloced->size--;
}

/**
 * @brief Frees a variable pointing to a string, and sets the variable to NULL.
 *
 * @param ptr This should be the address of a variable pointing to
 * something that has been allocated, like a string.
 */
void	ft_free(void *ptrptr)
{
	void		**_ptrptr;
	void		*ptr;

	_ptrptr = ptrptr;
	ptr = *_ptrptr;
	free_malloc_ptr(ptr);
	*_ptrptr = NULL;
	free(ptr);
}
