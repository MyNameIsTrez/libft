/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:15 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 12:27:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stralloc(const size_t len)
{
	return (ft_calloc(len + 1, sizeof(char)));
}

/**
 * @brief Concatenates @p str1 and @p str2 as a new string.
 *
 * @param str1
 * @param str2
 * @return The concatenated string.
 */
char	*ft_strjoin(const char *str1, const char *str2)
{
	size_t	str1_len;
	size_t	str2_len;
	char	*joined;

	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	joined = ft_stralloc(str1_len + str2_len);
	if (joined != NULL)
	{
		ft_memcpy(&joined[0], str1, str1_len);
		ft_memcpy(&joined[str1_len], str2, str2_len);
	}
	return (joined);
}
