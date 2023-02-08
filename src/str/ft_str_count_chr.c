/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_count_chr.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/24 15:17:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/24 15:59:23 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "str/ft_str.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Counts how often @p chr is in @p str.
 *
 * @param str
 * @param chr
 * @return
 */
size_t	ft_str_count_chr(char *str, const char chr)
{
	size_t	count;

	if (chr == '\0')
		return (0);
	count = 0;
	while (*str != '\0')
	{
		str = ft_strchr(str, chr);
		if (str == NULL)
			break ;
		str++;
		count++;
	}
	return (count);
}

////////////////////////////////////////////////////////////////////////////////
