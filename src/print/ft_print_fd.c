/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_fd.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 16:29:33 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 12:19:15 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/helper_headers/ft_types.h"
#include "src/mem/ft_mem.h"
#include "src/str/ft_str.h"

#include <sys/types.h>

// TODO: Make this work for any special characters, not just \n
ssize_t	ft_print_fd(char *str, t_i32 fd)
{
	char	*replaced;
	ssize_t	len;

	replaced = ft_str_replace(str, "\n", "\\n", "ft_print_fd() replaced str");
	if (replaced == NULL)
		return (-1);
	len = ft_write(fd, replaced, ft_strlen(replaced));
	ft_free(&replaced);
	if (len < 0)
		return (-1);
	return (len);
}
