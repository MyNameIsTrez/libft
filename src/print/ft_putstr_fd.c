/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:29 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 12:19:26 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"
#include "src/mem/ft_mem.h"
#include "src/str/ft_str.h"

#include <sys/types.h>

/**
 * @brief Writes a string.
 *
 * @param str The string to output.
 * @param fd The file descriptor to write to.
 */
ssize_t	ft_putstr_fd(char *str, t_i32 fd)
{
	return (ft_write(fd, str, ft_strlen(str)));
}
