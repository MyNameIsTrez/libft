/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:15 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:46:12 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/str/ft_str.h"

/**
 * @brief Concatenates @p str1 and @p str2 as a new string.
 *
 * @param str1 The prefix string.
 * @param str2 The suffix string.
 * @return The new string;\n
   NULL if the allocation fails.
 */
char	*ft_strjoin(const char *str1, const char *str2, char *description)
{
	size_t	len;
	char	*joined;

	len = 0;
	if (str1)
		len += ft_strlen(str1);
	if (str2)
		len += ft_strlen(str2);
	joined = ft_stralloc(len, description);
	if (joined)
	{
		if (str1)
			ft_strlcpy(joined, str1, len + 1);
		if (str2)
			ft_strlcat(joined, str2, len + 1);
	}
	return (joined);
}
