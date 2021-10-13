/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:12 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/13 10:40:57 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// TODO: REMOVE!!!!
#include <stdio.h>
#include <unistd.h>


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

	// printf("foo1\n");
	initial_dst_len = ft_strnlen(dst, dstsize);
	i = 0;
	// printf("foo2\n");
	while (i + initial_dst_len + 1 < dstsize && src[i] != '\0')
	{
		// printf("foo3\n");
		dst[i + initial_dst_len] = src[i];
		i++;
	}
	// printf("foo4\n");
	if (i + initial_dst_len < dstsize)
	{
		// printf("foo5\n");
		dst[i + initial_dst_len] = '\0';
	}
	// printf("foo6\n");
	if (i + 1 < dstsize)
	{
		// printf("foo7\n");
		return (ft_strlen(src) + initial_dst_len);
	}
	else
	{
		// printf("foo8\n");
		return (ft_strlen(src) + 1);
	}
}
