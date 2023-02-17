/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_substr.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:29 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/01 16:31:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/print/ft_print.h"

#include <sys/types.h>
#include <unistd.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Writes a substring.
 *
 * @param str1 The start of the substring.
 * @param str2 The end of the substring.
 */
ssize_t	ft_put_substr(char *str1, char *str2)
{
	return (ft_put_substr_fd(str1, str2, STDOUT_FILENO));
}

////////////////////////////////////////////////////////////////////////////////
