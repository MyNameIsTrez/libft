/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EXTRA_ft_strnlen.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/12 13:54:15 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/12 15:53:07 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Gets the length of a fixed-size string.
 *
 * @param str
 * @param max_len
 * @return ft_strlen() if it's less than @p maxlen;\n
   @p maxlen if there is no null character in the first @p maxlen characters.
 */
size_t	ft_strnlen(const char *str, const size_t max_len)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0' && len < max_len)
		len++;
	return (len);
}
