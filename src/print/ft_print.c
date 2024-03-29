/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 16:29:33 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/28 13:42:07 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/print/ft_print.h"

#include <sys/types.h>
#include <unistd.h>

/**
 * @brief Prints a string with escaped special characters
 * to the standard output.
 *
 * @param str
 */
ssize_t	ft_print(char *str)
{
	return (ft_print_fd(str, STDOUT_FILENO));
}
