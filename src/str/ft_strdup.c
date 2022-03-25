/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 17:37:30 by sbos          ########   odam.nl         */
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
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, str, ft_strlen(str));
	return (dup);
}
