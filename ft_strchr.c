/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:22 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 13:45:22 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Locates the first @p chr in @p str.
 *
 * @param str
 * @param chr
 * @return A pointer to the first @p chr in @p str;\n
   NULL if @p chr isn't in @p str.
 */
char	*ft_strchr(const char *str, int chr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			return (&((char *)str)[i]);
		i++;
	}
	if (chr == '\0')
		return (&((char *)str)[i]);
	else
		return (NULL);
}
