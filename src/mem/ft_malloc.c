/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_malloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 10:57:52 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 11:36:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Used so my tester can check whether programs still work
 * when malloc() fails.
 *
 * @param size
 * @return NULL if this call was set to fail
 */
#ifdef DEBUG

void	*ft_malloc(size_t size)
{
	malloc_call_count++;
	if (malloc_call_count != malloc_call_count_to_fail)
		return (malloc(size));
	was_malloc_unstable = true;
	return (NULL);
}
#else

void	*ft_malloc(size_t size)
{
	return (malloc(size));
}
#endif

////////////////////////////////////////////////////////////////////////////////
