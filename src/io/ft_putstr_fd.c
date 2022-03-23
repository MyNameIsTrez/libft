/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:29 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 17:21:20 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Writes a string.
 *
 * @param str The string to output.
 * @param fd The file descriptor to write to.
 */
ssize_t	ft_putstr_fd(char *str, int fd)
{
	return (write(fd, str, ft_strlen(str)));
}

////////////////////////////////////////////////////////////////////////////////
