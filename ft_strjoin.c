/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:15 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 15:34:59 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stralloc(const size_t len)
{
	return (ft_calloc(len + 1, sizeof(char)));
}

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		s1_len;
	int		s2_len;
	char	*joined;

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	s1_len = ft_strlen(str1);
	s2_len = ft_strlen(str2);
	joined = ft_stralloc(s1_len + s2_len);
	if (joined)
	{
		ft_memcpy(&joined[0], str1, s1_len);
		ft_memcpy(&joined[s1_len], str2, s2_len);
	}
	return (joined);
}
