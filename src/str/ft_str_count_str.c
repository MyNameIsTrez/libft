/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_count_str.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/24 15:17:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 16:37:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/str/ft_str.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Counts how often @p str is in @p str.
 * Not overlapping, so "aa" is only once in "aaa".
 *
 * @param str1
 * @param str2
 * @return
 */
size_t	ft_str_count_str(char *str1, const char *str2)
{
	size_t	str2_len;
	size_t	count;

	str2_len = ft_strlen(str2);
	if (*str2 == '\0')
		return (0);
	count = 0;
	while (*str1 != '\0')
	{
		str1 = ft_strstr(str1, str2);
		if (str1 == NULL)
			break ;
		str1 += str2_len;
		count++;
	}
	return (count);
}

////////////////////////////////////////////////////////////////////////////////
