/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_substr_fd.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:29 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 12:19:20 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/helper_headers/ft_types.h"
#include "src/mem/ft_mem.h"

#include <sys/types.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Writes a substring to @p fd.
 *
 * @param start_substr The start of the substring.
 * @param end_substr The end of the substring.
 * @param fd The file descriptor to write to.
 */
ssize_t	ft_put_substr_fd(char *start_substr, char *end_substr, t_i32 fd)
{
	return (ft_write(fd, start_substr, (size_t)(end_substr - start_substr)));
}

////////////////////////////////////////////////////////////////////////////////
