/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:16 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 14:19:25 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

// TODO: Add check for if count * size overflows, like the real calloc.
/**
 * @brief Allocates @p count * @p size cleared bytes.
 *
 * @param count
 * @param size
 * @return Allocated bytes.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = ft_unstable_malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
