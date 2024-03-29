/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_char_to_str.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:01:53 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 17:21:39 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/str/ft_str.h"

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
		return (ft_empty_str());
	str = ft_stralloc(2 * sizeof(char), "char");
	if (str == NULL)
		return (str);
	str[0] = chr;
	return (str);
}
