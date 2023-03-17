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

void	*register_malloc(size_t count, size_t size, char *description)
{
	t_malloced		*malloced;
	void			*ptr;
	t_single_malloc	*malloc_ptr;

	if (count == 0 || size == 0 || SIZE_MAX / count < size)
		return (NULL);
	malloced = get_malloced();
	if (malloced == NULL)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	if (malloced->size >= malloced->capacity)
		if (!grow_malloc_ptrs(malloced))
			return (NULL);
	malloc_ptr = &malloced->malloc_ptrs[malloced->size];
	malloc_ptr->ptr = ptr;
	malloc_ptr->count = count;
	malloc_ptr->size = size;
	malloc_ptr->capacity = count * size;
	malloc_ptr->description = description;
	malloced->size++;
	return (ptr);
}
