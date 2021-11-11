/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:00 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/11 17:46:41 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last @p chr in @p str.
 *
 * @param str
 * @param chr
 * @return A pointer to the last @p chr in @p str;\n
   NULL if @p chr isn't in @p str.
 */
char	*ft_strrchr(const char *str, int chr)
{
	size_t	i;
	char	c;

	c = (char)chr;
	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)&str[i]);
	while (i > 0)
	{
		i--;
		if (str[i] == c)
			return ((char *)&str[i]);
	}
	return (NULL);
}
