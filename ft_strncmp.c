/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:04 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 14:55:02 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t len)
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
		else if (src1[i] == '\0' && src2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
