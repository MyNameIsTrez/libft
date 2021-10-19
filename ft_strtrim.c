/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:39:58 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/18 16:31:03 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static unsigned int	get_start_index(char const *string, char const *trim_set)
{
	unsigned int	start;

	start = 0;
	while (string[start] != '\0' && ft_strchr(trim_set, string[start]) != NULL)
		start++;
	return (start);
}

static unsigned int	get_end_index(char const *string, char const *trim_set)
{
	unsigned int	end;

	end = ft_strlen(string) - 1;
	while (end >= 0 && ft_strchr(trim_set, string[end]) != NULL)
		end--;
	return (end);
}

char	*ft_strtrim(char const *string, char const *trim_set)
{
	unsigned int	start;
	unsigned int	end;
	size_t			len;

	if (string == NULL || trim_set == NULL)
		return (NULL);
	start = get_start_index(string, trim_set);
	end = get_end_index(string, trim_set);
	len = end - start;
	return (ft_substr(string, start, len + 1));
}
