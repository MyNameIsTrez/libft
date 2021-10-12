/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:12 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/12 15:54:05 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// TODO: REMOVE!!!!
#include <stdio.h>
#include <unistd.h>


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	initial_dst_len;
	size_t	i;
	// printf("foo1\n");

	initial_dst_len = ft_strlen(dst);
	if (dstsize == 0)
	{
		// printf("foo2\n");
		return (ft_strlen(src));
	}

	// printf("foo3\n");
	i = 0;
	while (i + dstsize < dstsize - 1 && src[i] != '\0')
	{
		dst[i + dstsize] = src[i];
		i++;
	}
	// printf("foo4\n");

	if (i + dstsize < dstsize)
	{
		dst[i + dstsize] = '\0';
	}
	// printf("foo5\n");

	if (i + 1 < dstsize)
	{
		// printf("foo6\n");
		return (ft_strlen(src) + dstsize);
	}
	else
	{
		// printf("foo7\n");
		return (ft_strlen(src) + 1);
	}
}
