/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 17:15:24 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Sets @p len bytes of memory to byte @p chr.
 *
 * @param dst
 * @param chr
 * @param len
 * @return The passed dst.
 */
void	*ft_memset(void *dst, int chr, size_t len)
{
	size_t	i;

	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = (char)chr;
		i++;
	}
	return (dst);
}
