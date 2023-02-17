/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   _recalloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:32:28 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 14:37:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_private_mem_allocating.h"
#include "src/mem/ft_mem.h"

#include <stdlib.h>

void	*_recalloc(void *ptr, size_t old_count, size_t new_count,
			size_t type_size)
{
	void	*new_ptr;

	new_ptr = _calloc(new_count, type_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		ft_memcpy(new_ptr, ptr, old_count * type_size);
		free(ptr);
	}
	return (new_ptr);
}
