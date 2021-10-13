/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:12 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/13 11:52:23 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && len < maxlen)
	{
		len++;
	}
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	start_dst_len;

	start_dst_len = ft_strnlen(dst, dstsize);
	if (start_dst_len < dstsize)
	{
		return (start_dst_len
			+ ft_strlcpy(dst + start_dst_len, src, dstsize - start_dst_len));
	}
	return (dstsize + ft_strlen(src));
}
