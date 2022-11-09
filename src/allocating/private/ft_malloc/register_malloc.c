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

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "../ft_private_mem_allocating.h"
#include "ft_private_ft_malloc.h"
#include "register_malloc/ft_private_register_malloc.h"

////////////////////////////////////////////////////////////////////////////////

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
	malloced->malloc_ptrs[malloced->size] = malloc_ptr;
	malloced->size++;
	return (malloc_ptr);
}

////////////////////////////////////////////////////////////////////////////////
