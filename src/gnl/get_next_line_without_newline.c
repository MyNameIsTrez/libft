/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_without_newline.c                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 17:20:44 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 17:20:53 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/helper_headers/ft_types.h"
#include "src/gnl/get_next_line.h"
#include "src/str/ft_str.h"

////////////////////////////////////////////////////////////////////////////////

char	*get_next_line_without_newline(t_i32 fd)
{
	char	*line;
	char	*nl_ptr;

	line = get_next_line(fd);
	if (line == NULL)
		return (NULL);
	nl_ptr = ft_strchr(line, '\n');
	if (nl_ptr != NULL)
		*nl_ptr = '\0';
	return (line);
}

////////////////////////////////////////////////////////////////////////////////
