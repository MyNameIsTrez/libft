/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:29 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 15:22:45 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

/**
 * @brief Writes a string.
 *
 * @param str
 * @param fd
 */
void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}
