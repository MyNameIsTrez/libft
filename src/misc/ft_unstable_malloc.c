/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_unstable_malloc.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:57:10 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 13:51:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>	// malloc

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
	// static size_t	i = 0;
	(void)size;

	// i++;
	// if (i == 10)
	return (NULL);
	// return (malloc(size));
}

////////////////////////////////////////////////////////////////////////////////
