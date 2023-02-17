/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/16 17:01:39 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"

#include <stddef.h>

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
		((t_u8 *)dst)[i] = (t_u8)chr;
		i++;
	}
	return (dst);
}
