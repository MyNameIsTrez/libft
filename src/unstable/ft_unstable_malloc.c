/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_unstable_malloc.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:57:10 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 16:18:14 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

int malloc_call_count = 0;
int malloc_call_count_to_fail = 0;
bool was_malloc_unstable = 0;

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Search-and-replace all malloc() calls with this function so my tester
 * can check whether programs still work when malloc() fails and returns NULL.
 *
 * @param size
 * @return
 */
void	*ft_unstable_malloc(size_t size)
{
	malloc_call_count++;
	if (malloc_call_count != malloc_call_count_to_fail)
		return (malloc(size));
	was_malloc_unstable = true;
	return (NULL);
}

////////////////////////////////////////////////////////////////////////////////
