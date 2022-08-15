/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   register_malloc.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:32:55 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 14:35:34 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "../ft_private_mem_allocating.h"

////////////////////////////////////////////////////////////////////////////////

#include "ft_private_ft_malloc.h"

////////////////////////////////////////////////////////////////////////////////

void	*register_malloc(size_t count, size_t size)
{
	t_malloced	*malloced;
	void		*malloc_ptr;
	size_t		old_capacity;
	size_t		new_capacity;
	void		*temp;

	if (count == 0 || size == 0)
		return (NULL);
	malloced = get_malloced();
	if (malloced == NULL)
		return (NULL);
	malloc_ptr = malloc(count * size);
	if (malloc_ptr == NULL)
		return (NULL);
	if (malloced->size >= malloced->capacity)
	{
		old_capacity = malloced->capacity;
		new_capacity = old_capacity * 2;
		temp = _recalloc(malloced->malloc_ptrs, old_capacity, new_capacity, \
				sizeof(void *));
		if (temp == NULL)
			return (NULL);
		malloced->malloc_ptrs = temp;
		malloced->capacity *= 2;
	}
	malloced->malloc_ptrs[malloced->size] = malloc_ptr;
	malloced->size++;
	return (malloc_ptr);
}

////////////////////////////////////////////////////////////////////////////////
