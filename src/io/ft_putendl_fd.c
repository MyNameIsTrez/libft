/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:33 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/24 14:06:37 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

/**
 * @brief Writes a newline.
 *
 * @param str The string to output.
 * @param fd The file descriptor on which to write.
 */
ssize_t	ft_putendl_fd(char *str, int fd)
{
	const ssize_t	len1 = ft_putstr_fd(str, fd);
	const ssize_t	len2 = ft_putchar_fd('\n', fd);

	if (len1 < 0 || len2 < 0)
		return (-1);
	return (len1 + len2);
}
