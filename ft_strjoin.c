/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:15 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/26 16:01:51 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	*ft_stralloc(size_t n)
{
	return (ft_calloc(n + 1, sizeof(char)));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined = ft_stralloc(s1_len + s2_len);
	if (joined)
	{
		ft_memcpy(&joined[0], s1, s1_len);
		ft_memcpy(&joined[s1_len], s2, s2_len);
	}
	return (joined);
}
