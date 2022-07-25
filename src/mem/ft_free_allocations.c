/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_allocations.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 13:32:04 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/25 11:20:45 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "malloced.h"

////////////////////////////////////////////////////////////////////////////////

void	ft_free_allocations(void)
{
	t_malloced	*malloced;
	size_t		index;

	malloced = get_malloced();
	if (malloced == NULL || malloced->malloc_ptrs == NULL)
		return ;
	index = 0;
	while (index < malloced->size)
	{
		free(malloced->malloc_ptrs[index]);
		index++;
	}
	free(malloced->malloc_ptrs);
}

////////////////////////////////////////////////////////////////////////////////
