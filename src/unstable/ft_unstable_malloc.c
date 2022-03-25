/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_unstable_malloc.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:57:10 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 18:40:02 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>	// malloc

////////////////////////////////////////////////////////////////////////////////

// TODO: Try to include the header containing these as extern?
int malloc_call_count = 0;
int malloc_call_count_fail_point = 0;
int	was_malloc_unstable = 0;

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
	int	stable = 1;

	malloc_call_count++;
	if (malloc_call_count == malloc_call_count_fail_point)
		stable = 0;
	if (stable)
		return (malloc(size));
	was_malloc_unstable = 1;
	return (NULL);
}

////////////////////////////////////////////////////////////////////////////////
