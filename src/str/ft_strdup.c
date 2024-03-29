/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:46:14 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/mem/ft_mem.h"
#include "src/str/ft_str.h"

/**
 * @brief Duplicates @p str.
 *
 * @param str
 * @return The duplicated string.
 */
char	*ft_strdup(const char *str, char *description)
{
	char	*dup;

	dup = ft_stralloc(ft_strlen(str), description);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, str, ft_strlen(str));
	return (dup);
}
