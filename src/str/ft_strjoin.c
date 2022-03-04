/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:15 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/01 16:21:57 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates @p str1 and @p str2 as a new string.
 *
 * @param str1 💥 The prefix string.
 * @param str2 💥 The suffix string.
 * @return The new string;\n
   NULL if the allocation fails.
 */
char	*ft_strjoin(const char *str1, const char *str2)
{
	size_t	str1_len;
	size_t	str2_len;
	char	*joined;

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	joined = ft_stralloc(str1_len + str2_len);
	if (joined != NULL)
	{
		ft_memcpy(joined, str1, str1_len);
		ft_memcpy(&joined[str1_len], str2, str2_len);
	}
	return (joined);
}
