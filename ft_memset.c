/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 15:20:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Sets @p len bytes of memory to byte @p chr.
 *
 * @param dst
 * @param chr
 * @param len
 * @return
 */
void	*ft_memset(void *dst, int chr, size_t len)
{
	size_t	i;
	char	*dst_copy;

	dst_copy = (char *)dst;
	i = 0;
	while (i < len)
	{
		dst_copy[i] = (char)chr;
		i++;
	}
	return (dst);
}
