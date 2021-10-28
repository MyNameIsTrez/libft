/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:20 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/26 15:46:14 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stralloc(size_t n)
{
	return (ft_calloc(n + 1, sizeof(char)));
}

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = ft_stralloc(ft_strlen(s1));
	if (dup)
		ft_memcpy(dup, s1, ft_strlen(s1));
	return (dup);
}
