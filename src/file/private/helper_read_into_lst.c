/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   helper_read_into_lst.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:46:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 18:12:44 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/allocating/ft_allocating.h"
#include "src/file/private/ft_private_file.h"
#include "src/gnl/get_next_line.h"
#include "src/helper_headers/ft_types.h"
#include "src/str/ft_str.h"

#include <stddef.h>

////////////////////////////////////////////////////////////////////////////////

t_status	helper_read_into_lst(t_char_grid *grid, t_i32 fd, char *line,
					t_list **lst_ptr)
{
	grid->width = 0;
	grid->height = 0;
	if (line != NULL)
		grid->width = ft_strlen(line);
	while (line != NULL)
	{
		grid->height++;
		line = get_next_line_without_newline(fd);
		if (line == NULL)
			break ;
		if (ft_strlen(line) != grid->width)
		{
			ft_free(&line);
			return (ft_set_error(FT_ERROR_NON_RECTANGULAR_GRID));
		}
		if (ft_lst_new_front(lst_ptr, line) == NULL)
		{
			ft_free(&line);
			return (ERROR);
		}
	}
	return (ft_any_error());
}

////////////////////////////////////////////////////////////////////////////////
