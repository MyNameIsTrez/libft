/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_malloc_ptr.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 15:22:51 by sbos          #+#    #+#                 */
/*   Updated: 2023/03/20 15:22:51 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_private_mem_allocating.h"

#include <sys/types.h>

t_single_malloc	*ft_find_malloc_ptr(void *ptr)
{
	size_t		index;
	t_malloced	*malloced;

	index = ft_find_malloc_ptr_index(ptr);
	if (index == -1)
		return (NULL);
	malloced = get_malloced();
	if (malloced == NULL)
		return (NULL);
	return (&malloced->malloc_ptrs[index]);
}
