/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:15 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/19 16:55:16 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined = malloc(s1_len + s2_len + 1);
	if (joined)
	{
		ft_memcpy(joined, s1, s1_len);
		ft_memcpy(joined + s1_len, s2, s2_len);
		joined[s1_len + s2_len] = '\0';
	}
	return (joined);
}
