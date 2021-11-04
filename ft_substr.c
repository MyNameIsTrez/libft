/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:39:55 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 13:54:27 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static size_t	ft_strnlen(const char *str, const size_t max_len)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0' && len < max_len)
		len++;
	return (len);
}

/**
 * @brief Allocates and returns a substring from the string @p str.\n
   The substring begins at index @p start and is of maximum length @p len.
 *
 * @param str
 * @param start
 * @param len
 * @return The substring. NULL if the allocation fails.
 */
char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	new_len;

	if (ft_strlen(str) <= start)
		return (ft_strdup(""));
	new_len = ft_strnlen(&str[start], len);
	substr = malloc((new_len + 1) * sizeof(char));
	if (substr != NULL)
	{
		substr[new_len] = '\0';
		ft_memcpy(substr, &str[start], new_len);
	}
	return (substr);
}
