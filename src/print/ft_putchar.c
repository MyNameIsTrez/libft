/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:36 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/28 13:41:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/print/ft_print.h"

#include <sys/types.h>
#include <unistd.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Writes a character to the standard output.
 *
 * @param chr The character to output.
 */
ssize_t	ft_putchar(char chr)
{
	return (ft_putchar_fd(chr, STDOUT_FILENO));
}

////////////////////////////////////////////////////////////////////////////////
