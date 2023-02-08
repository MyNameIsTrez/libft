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

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_mem_allocating.h"
#include "private/ft_free/ft_private_ft_free.h"

#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Frees a variable pointing to a string, and sets the variable to NULL.
 *
 * @param ptr This should be the address of a variable pointing to
 * something that has been allocated, like a string.
 */
void	ft_free(void *ptrptr)
{
	void		**_ptrptr;
	t_malloced	*malloced;
	size_t		index;
	void		*ptr;

	_ptrptr = ptrptr;
	malloced = get_malloced();
	if (malloced != NULL)
	{
		index = 0;
		while (index < malloced->size)
		{
			if (malloced->malloc_ptrs[index] == *_ptrptr)
			{
				free_malloc_ptr(index, malloced);
				break ;
			}
			index++;
		}
	}
	ptr = *_ptrptr;
	*_ptrptr = NULL;
	free(ptr);
}

////////////////////////////////////////////////////////////////////////////////
