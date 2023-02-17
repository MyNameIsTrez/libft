/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:36 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 12:19:23 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"
#include "src/mem/ft_mem.h"

#include <sys/types.h>

/**
 * @brief Writes a character.
 *
 * @param chr The character to output.
 * @param fd The file descriptor to write to.
 */
ssize_t	ft_putchar_fd(char chr, t_i32 fd)
{
	return (ft_write(fd, &chr, 1));
}
