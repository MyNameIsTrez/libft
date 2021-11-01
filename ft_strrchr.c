/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:00 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 14:55:58 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == chr)
			return ((char *)str + i);
		i--;
	}
	if (chr == '\0')
		return ((char *)str + i);
	else
		return (NULL);
}
