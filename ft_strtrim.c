/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:39:58 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 14:24:56 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_start_index(char const *str, char const *trim_set)
{
	unsigned int	start;

	start = 0;
	while (str[start] != '\0' && ft_strchr(trim_set, str[start]) != NULL)
		start++;
	return (start);
}

static unsigned int	get_end_index(char const *str, char const *trim_set)
{
	unsigned int	end;

	end = ft_strlen(str) - 1;
	while (end > 0 && ft_strchr(trim_set, str[end]) != NULL)
		end--;
	return (end);
}

char	*ft_strtrim(char const *str, char const *trim_set)
{
	unsigned int	start;
	unsigned int	end;
	size_t			len;

	if (str == NULL || trim_set == NULL)
		return (NULL);
	start = get_start_index(str, trim_set);
	if (str[start] == '\0')
		return (ft_strdup(""));
	end = get_end_index(str, trim_set);
	len = end - start;
	return (ft_substr(str, start, len + 1));
}
