/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:12 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/13 10:56:06 by sbos          ########   odam.nl         */
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
	size_t	initial_dst_len;
	size_t	i;

	initial_dst_len = ft_strnlen(dst, dstsize);
	i = 0;
	while (i + initial_dst_len + 1 < dstsize && src[i] != '\0')
	{
		dst[i + initial_dst_len] = src[i];
		i++;
	}
	if (i + initial_dst_len < dstsize)
	{
		dst[i + initial_dst_len] = '\0';
	}
	if (i + 1 < dstsize)
	{
		return (initial_dst_len + ft_strlen(src));
	}
	else
	{
		return (dstsize + ft_strlen(src));
	}
}
