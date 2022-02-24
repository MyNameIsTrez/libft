/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:36 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/24 14:04:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Writes a character.
 *
 * @param chr The character to output.
 * @param fd The file descriptor on which to write.
 */
ssize_t	ft_putchar_fd(char chr, int fd)
{
	return (write(fd, &chr, 1));
}
