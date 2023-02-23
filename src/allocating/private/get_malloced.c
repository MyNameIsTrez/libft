/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_malloced.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:30:26 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 14:36:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_private_mem_allocating.h"

t_malloced	*get_malloced(void)
{
	static t_malloced	malloced;

	if (malloced.malloc_ptrs == NULL)
	{
		malloced.malloc_ptrs = _calloc(1, sizeof(*malloced.malloc_ptrs));
		if (malloced.malloc_ptrs == NULL)
			return (NULL);
		malloced.capacity = 1;
	}
	return (&malloced);
}
