/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:42 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/19 16:13:56 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_copy;
	char	*src_copy;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_copy = (char *)dst;
	src_copy = (char *)src;
	i = 0;
	while (i < n)
	{
		dst_copy[i] = src_copy[i];
		i++;
	}
	return (dst);
}
