/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:20 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 15:34:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stralloc(const size_t len)
{
	return (ft_calloc(len + 1, sizeof(char)));
}

char	*ft_strdup(const char *str)
{
	char	*dup;

	dup = ft_stralloc(ft_strlen(str));
	if (dup != NULL)
		ft_memcpy(dup, str, ft_strlen(str));
	return (dup);
}
