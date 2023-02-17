/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_grid_from_file.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 16:53:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 18:12:44 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/file/private/ft_private_file.h"
#include "src/gnl/get_next_line.h"
#include "src/helper_headers/ft_defines.h"

#include <fcntl.h>
#include <unistd.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief
 *
 * @param grid
 * @param filename
 * @return
 */
t_status	ft_read_grid_from_file(t_char_grid *grid, char *filename)
{
	t_i32	fd;
	t_list	*lst;

	fd = open(filename, O_RDONLY);
	if (fd < 0 || fd >= OPEN_FD_MAX)
	{
		close(fd);
		return (ft_set_error(FT_ERROR_INVALID_FD));
	}
	lst = NULL;
	if (read_into_lst(grid, fd, &lst) != OK)
	{
		clear_get_next_line(fd);
		close(fd);
		return (ft_any_error());
	}
	close(fd);
	ft_lst_reverse(&lst);
	if (transfer_lst_to_cells(lst, grid) != OK)
	{
		ft_lstclear(&lst, NULL);
		return (ft_any_error());
	}
	ft_lstclear(&lst, NULL);
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////
