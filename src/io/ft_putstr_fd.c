/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:29 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/24 14:06:18 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

/**
 * @brief Writes a string.
 *
 * @param str 💥 The string to output.
 * @param fd The file descriptor on which to write.
 */
ssize_t	ft_putstr_fd(char *str, int fd)
{
	if (str != NULL)
		return (write(fd, str, ft_strlen(str)));
	return (0);
}
