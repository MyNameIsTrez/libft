/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:12 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/12 12:25:20 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO: REMOVE!!!!
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	initial_dst_len;
	size_t	i;

	initial_dst_len = ft_strlen(dst);
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (i + initial_dst_len < dstsize - 1 && src[i] != '\0')
	{
		// printf("index: %zu, char: %c\n", i, src[i]);
		// fflush(NULL);
		dst[i + initial_dst_len] = src[i];
		i++;
	}
	dst[i + initial_dst_len] = '\0';
	// printf("%zu, %zu\n", i, dstsize);
	if (i + 1 < dstsize)
	{
		return (ft_strlen(src) + initial_dst_len);
	}
	else
	{
		return (ft_strlen(src) + 1);
	}
}
