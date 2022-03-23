/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:39:55 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 14:49:51 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

/**
 * @brief Allocates and returns a substring from the string @p str.\n
   The substring begins at index @p start and is of maximum length @p len.
 *
 * @param str 💥 The string from which to create the substring.
 * @param start The start index of the substring in the string @p str.
 * @param len The maximum length of the substring.
 * @return The substring;\n
   NULL if the allocation fails.
 */
char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	new_len;
	char	*substr;

	if (str == NULL)
		return (NULL);
	if (ft_strlen(str) <= start)
		return (ft_empty_str());
	new_len = ft_strnlen(&str[start], len);
	substr = ft_unstable_malloc((new_len + 1) * sizeof(char));
	if (substr != NULL)
		ft_strlcpy(substr, &str[start], new_len + 1);
	return (substr);
}
