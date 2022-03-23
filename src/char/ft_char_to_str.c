/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_char_to_str.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:01:53 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 14:18:08 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Converts a character to a string.
 *
 * @param chr
 * @return
 */
char	*ft_char_to_str(const char chr)
{
	char	*str;

	if (chr == '\0')
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (str);
	}
	else
	{
		str = malloc(2 * sizeof(char));
		if (str == NULL)
			return (str);
		str[1] = '\0';
	}
	str[0] = chr;
	return (str);
}
