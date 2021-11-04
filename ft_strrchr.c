/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:00 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 13:45:32 by sbos          ########   odam.nl         */
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

	i = ft_strlen(str);
	if (chr == '\0')
		return ((char *)&str[i]);
	while (i > 0)
	{
		i--;
		if (str[i] == chr)
			return ((char *)&str[i]);
	}
	return (NULL);
}
