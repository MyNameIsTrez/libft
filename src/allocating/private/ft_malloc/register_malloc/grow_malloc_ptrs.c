/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   grow_malloc_ptrs.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 15:53:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 15:59:36 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_malloc/ft_private_ft_malloc.h"
#include "src/allocating/private/ft_private_mem_allocating.h"

#include <stdbool.h>

bool	grow_malloc_ptrs(t_malloced *malloced)
{
	size_t		old_capacity;
	size_t		new_capacity;
	void		*temp;

	old_capacity = malloced->capacity;
	new_capacity = old_capacity * 2;
	temp = _recalloc(malloced->malloc_ptrs, old_capacity, new_capacity,
			sizeof(*malloced->malloc_ptrs));
	if (temp == NULL)
		return (false);
	malloced->malloc_ptrs = temp;
	malloced->capacity *= 2;
	return (true);
}
