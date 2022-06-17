/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:33 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 18:16:45 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Writes a string and a newline.
 *
 * @param str The string to output.
 * @param fd The file descriptor to write to.
 */
ssize_t	ft_putendl_fd(char *str, int fd)
{
	ssize_t	len1;
	ssize_t	len2;

	len1 = ft_putstr_fd(str, fd);
	if (len1 < 0)
		return (len1);
	len2 = ft_putchar_fd('\n', fd);
	if (len2 < 0)
		return (len2);
	return (len1 + len2);
}

////////////////////////////////////////////////////////////////////////////////
