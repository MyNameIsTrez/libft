/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_count_str_overlap.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/24 15:17:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/24 16:03:11 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "str/ft_str.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Counts how often @p str is in @p str.
 * Overlapping, so "aa" is twice in "aaa".
 *
 * @param str1
 * @param str2
 * @return
 */
size_t	ft_str_count_str_overlap(char *str1, const char *str2)
{
	size_t			count;

	if (*str2 == '\0')
		return (0);
	count = 0;
	while (*str1 != '\0')
	{
		str1 = ft_strstr(str1, str2);
		if (str1 == NULL)
			break ;
		str1++;
		count++;
	}
	return (count);
}

////////////////////////////////////////////////////////////////////////////////
