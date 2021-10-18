/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:39:55 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/18 14:33:05 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && len < maxlen)
	{
		len++;
	}
	return (len);
}

// ft_substr("hello world", 9, 20);

// TODO: Change "ft_strnlen(s, len) <= start" to "ft_strnlen(s, len) < start" ?
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	new_len;

	if (ft_strnlen(s, len) <= start)
		return (ft_calloc(1, 1));
	new_len = ft_strnlen(s + start, len);
	substr = malloc(new_len + 1);
	if (substr == NULL)
		return (NULL);
	substr[new_len] = '\0';
	ft_memcpy(substr, s + start, new_len);
	return (substr);
}

// char    *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     char            *sub;
//     unsigned int    s_len;
//     unsigned int    i;
//     if (s == NULL)
//         return (NULL);
//     s_len = ft_strlen(s);
//     if (start >= s_len)
// 	{
// 		char *q = malloc(1);
// 		q[0] = '\0';
//         return (q);
// 	}
//     sub = malloc((len + 1) * sizeof(char));
//     if (sub == NULL)
//         return (NULL);
//     i = 0;
//     while (i < len && i + start < s_len)
//     {
//         sub[i] = s[start + i];
//         i++;
//     }
//     sub[i] = '\0';
//     return (sub);
// }
