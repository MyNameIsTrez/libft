/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   register_malloc.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:32:55 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 15:57:47 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_private_mem_allocating.h"
#include "src/allocating/private/ft_malloc/ft_private_ft_malloc.h"
#include "src/allocating/private/ft_malloc/register_malloc/\
ft_private_register_malloc.h"

#include <stdint.h>
#include <stdlib.h>

void	*register_malloc(size_t count, size_t size)
{
	t_malloced	*malloced;
	void		*malloc_ptr;

	if (count == 0 || size == 0 || SIZE_MAX / count < size)
		return (NULL);
	malloced = get_malloced();
	if (malloced == NULL)
		return (NULL);
	malloc_ptr = malloc(count * size);
	if (malloc_ptr == NULL)
		return (NULL);
	if (malloced->size >= malloced->capacity)
		if (!grow_malloc_ptrs(malloced))
			return (NULL);
	malloced->malloc_ptrs[malloced->size].ptr = malloc_ptr;
	malloced->malloc_ptrs[malloced->size].count = count;
	malloced->malloc_ptrs[malloced->size].size = size;
	malloced->malloc_ptrs[malloced->size].capacity = count * size;
	malloced->size++;
	return (malloc_ptr);
}
