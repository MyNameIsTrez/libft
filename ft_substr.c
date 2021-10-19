/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:39:55 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/19 16:11:45 by sbos          ########   odam.nl         */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	new_len;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	new_len = ft_strnlen(s + start, len);
	substr = malloc(new_len + 1);
	if (substr)
	{
		substr[new_len] = '\0';
		ft_memcpy(substr, s + start, new_len);
	}
	return (substr);
}
