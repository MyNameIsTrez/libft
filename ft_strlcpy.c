/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:10 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 14:51:38 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;

	i = 0;
	while (i + 1 < dst_size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dst_size)
		dst[i] = '\0';
	return (ft_strlen(src));
}
