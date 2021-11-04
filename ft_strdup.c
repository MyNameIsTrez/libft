/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:20 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 11:17:00 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stralloc(const size_t len)
{
	return (ft_calloc(len + 1, sizeof(char)));
}

/**
 * @brief Duplicates @p str.
 *
 * @param str
 * @return The duplicated string.
 */
char	*ft_strdup(const char *str)
{
	char	*dup;

	dup = ft_stralloc(ft_strlen(str));
	if (dup != NULL)
		ft_memcpy(dup, str, ft_strlen(str));
	return (dup);
}
