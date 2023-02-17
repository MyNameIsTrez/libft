/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:42 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:48:45 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include <stddef.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Copies @p len bytes from memory area @p src
   to memory area @p dst.\n
   If @p dst and @p src overlap, behavior is undefined.\n
   Applications in which dst and src might overlap should use ft_memmove()
   instead.
 *
 * @param dst
 * @param src
 * @param len
 * @return The original value of @p dst.
 */
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_copy;
	char	*src_copy;

	dst_copy = (char *)dst;
	src_copy = (char *)src;
	i = 0;
	while (i < len)
	{
		dst_copy[i] = src_copy[i];
		i++;
	}
	return (dst);
}

////////////////////////////////////////////////////////////////////////////////
