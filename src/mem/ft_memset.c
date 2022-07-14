/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Sets @p len bytes of memory to byte @p chr.
 *
 * @param dst
 * @param chr
 * @param len
 * @return The passed dst.
 */
void	*ft_memset(void *dst, t_i32 chr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = (char)chr;
		i++;
	}
	return (dst);
}

////////////////////////////////////////////////////////////////////////////////
