/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:39:58 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 15:04:13 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/str/ft_str.h"

////////////////////////////////////////////////////////////////////////////////

static t_u32	get_start_index(const char *str, const char *trim_set)
{
	t_u32	start;

	start = 0;
	while (str[start] != '\0' && ft_strchr(trim_set, str[start]) != NULL)
		start++;
	return (start);
}

static size_t	get_end_index(const char *str, const char *trim_set)
{
	size_t	end;

	end = ft_strlen(str) - 1;
	while (end > 0 && ft_strchr(trim_set, str[end]) != NULL)
		end--;
	return (end);
}

/**
 * @brief Allocates and returns a copy of @p str,
   with the characters specified in @p trim_set removed
   from the beginning and end of the string.
 *
 * @param str The string to be trimmed.
 * @param trim_set The reference set of characters to trim.
 * @return The trimmed string;\n
   NULL if the allocation fails.
 */
char	*ft_strtrim(const char *str, const char *trim_set)
{
	t_u32	start;
	size_t	end;
	size_t	len;

	start = get_start_index(str, trim_set);
	if (str[start] == '\0')
		return (ft_empty_str());
	end = get_end_index(str, trim_set);
	len = end - start;
	return (ft_substr(str, start, len + 1));
}

////////////////////////////////////////////////////////////////////////////////
