/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:20 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/25 18:18:14 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
