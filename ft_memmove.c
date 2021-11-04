/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:40 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 15:19:54 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a memory area safely.
 *
 * @param dst
 * @param src
 * @param len
 * @return
 */
static void	*ft_memcpy_reverse(void *dst, const void *src, size_t len)
{
	char	*dst_copy;
	char	*src_copy;

	dst_copy = (char *)dst;
	src_copy = (char *)src;
	while (len > 0)
	{
		len--;
		dst_copy[len] = src_copy[len];
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	else
		return (ft_memcpy_reverse(dst, src, len));
}
