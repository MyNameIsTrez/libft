/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:53:35 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include <stddef.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Counts the length of @p str.\n
   Requires @p str to be null-terminated.\n
   Doesn't count the null-terminator.
 *
 * @param str
 * @return The length of @p str.
 */
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

////////////////////////////////////////////////////////////////////////////////
