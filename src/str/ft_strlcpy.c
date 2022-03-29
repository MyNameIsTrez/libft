/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:10 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:46:11 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Overwrites @p dst with @p src.\n
   Guarantees null termination when @p dst_size >= 1.
   TODO: Use ft_memcpy() here.
 *
 * @param dst
 * @param src
 * @param dst_size
 * @return The length of @p src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;

	i = 0;
	while (i + 1 < dst_size and src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dst_size)
		dst[i] = '\0';
	return (ft_strlen(src));
}

////////////////////////////////////////////////////////////////////////////////
