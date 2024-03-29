/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_not_chr.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:22 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 14:33:12 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"

#include <stddef.h>

/**
 * @brief Locates the first character which isn't @p chr in @p str.
 *
 * @param str
 * @param chr
 * @return A pointer to the first character which isn't @p chr;\n
   NULL if there's no other character in @p str.
 */
char	*ft_str_not_chr(const char *str, const t_i32 chr)
{
	t_i32	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != chr)
			return (&((char *)str)[i]);
		i++;
	}
	if (chr == '\0')
		return (&((char *)str)[i]);
	else
		return (NULL);
}
