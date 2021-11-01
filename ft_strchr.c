/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:22 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 14:49:53 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int chr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			return ((char *)str + i);
		i++;
	}
	if (chr == '\0')
		return ((char *)str + i);
	else
		return (NULL);
}
