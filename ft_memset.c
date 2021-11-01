/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 14:44:33 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *dst, int chr, size_t len)
{
	size_t	i;
	char	*dst_copy;

	dst_copy = (char *)dst;
	i = 0;
	while (i < len)
	{
		dst_copy[i] = chr;
		i++;
	}
	return (dst);
}
