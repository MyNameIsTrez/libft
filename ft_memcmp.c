/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:44 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 15:24:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	*src1;
	unsigned char	*src2;
	size_t			i;
	int				diff;

	src1 = (unsigned char *)str1;
	src2 = (unsigned char *)str2;
	i = 0;
	while (i < len)
	{
		diff = src1[i] - src2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
