/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:36 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 15:23:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Writes a character.
 *
 * @param chr
 * @param fd
 */
void	ft_putchar_fd(char chr, int fd)
{
	write(fd, &chr, 1);
}
