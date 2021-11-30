/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EXTRA_ft_char_to_str.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 13:19:51 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/08 17:01:05 by sbos          ########   odam.nl         */
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
		str = malloc(sizeof(char));
	else
	{
		str = malloc(2 * sizeof(char));
		str[1] = '\0';
	}
	str[0] = chr;
	return (str);
}
