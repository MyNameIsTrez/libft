/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_fd.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 16:29:33 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 18:09:07 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

// TODO: Make this work for any special characters, not just \n
ssize_t	ft_print_fd(char *str, int fd)
{
	char	*replaced;
	ssize_t	len;

	replaced = ft_str_replace(str, "\n", "\\n");
	if (replaced == NULL)
		return (-1);
	len = ft_unstable_write(fd, replaced, ft_strlen(replaced));
	free(replaced);
	if (len < 0)
		return (-1);
	return (len);
}

////////////////////////////////////////////////////////////////////////////////
