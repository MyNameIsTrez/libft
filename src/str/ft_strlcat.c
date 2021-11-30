/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:12 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/25 18:20:08 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends @p src to @p dst.\n
   It overwrites the old null character at the end of @p dst,
   and adds a new null character at the end.
 *
 * @param dst
 * @param src
 * @param dst_size
 * @return The total length of the string this function tried to create,
   which is the initial length of @p dst plus the length of @p src;\n
   If the initial length of @p dst >= @p dst_size,
   then @p dst_size + the length of @p src is returned instead.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	initial_dst_len;

	initial_dst_len = ft_strnlen(dst, dst_size);
	if (initial_dst_len < dst_size)
	{
		ft_strlcpy(&dst[initial_dst_len], src, dst_size - initial_dst_len);
		return (initial_dst_len + ft_strlen(src));
	}
	return (dst_size + ft_strlen(src));
}
