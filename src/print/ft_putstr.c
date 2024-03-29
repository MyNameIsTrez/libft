/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:29 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 17:23:47 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/print/ft_print.h"

#include <sys/types.h>
#include <unistd.h>

/**
 * @brief Writes a string to the standard output.
 *
 * @param str The string to output.
 */
ssize_t	ft_putstr(char *str)
{
	return (ft_putstr_fd(str, STDOUT_FILENO));
}
