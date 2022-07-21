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

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "ft_malloced.h"

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

	_ptrptr = ptrptr;
	malloced = get_malloced();
	index = 0;
	while (index < malloced->size)
	{
		if (malloced->malloc_ptrs[index] == *_ptrptr)
		{
			malloced->malloc_ptrs[index] = NULL;
			break ;
		}
		index++;
	}
	free(*_ptrptr);
	*_ptrptr = NULL;
}

////////////////////////////////////////////////////////////////////////////////
