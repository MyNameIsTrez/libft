/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:33 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/28 13:41:35 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/print/ft_print.h"

#include <sys/types.h>
#include <unistd.h>

/**
 * @brief Writes a string and a newline to the standard output.
 *
 * @param str The string to output.
 */
ssize_t	ft_putendl(char *str)
{
	return (ft_putendl_fd(str, STDOUT_FILENO));
}
