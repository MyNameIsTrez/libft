/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:12 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 15:48:19 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *str, const size_t max_len)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0' && len < max_len)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	start_dst_len;

	start_dst_len = ft_strnlen(dst, dst_size);
	if (start_dst_len < dst_size)
		return (start_dst_len
			+ ft_strlcpy(dst + start_dst_len, src, dst_size - start_dst_len));
	return (dst_size + ft_strlen(src));
}
