/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_grid_from_file.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 16:53:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 14:04:33 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_status	read_into_lst(t_grid *grid, t_i32 fd, t_list **lst_ptr);

////////////////////////////////////////////////////////////////////////////////

STATIC void	clear_leftover_gnl_lines(t_i32 fd)
{
	while (get_next_line(fd))
	{
	}
}

STATIC t_status	transfer_lst_to_array(t_list *lst, char ***cells)
{
	*cells = (char **)ft_lst_to_array(lst);
	if (*cells == NULL)
		return (ft_set_error(FT_ERROR_MALLOC));
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief
 *
 * @param grid
 * @param filename
 * @return
 */
t_status	ft_read_grid_from_file(t_grid *grid, char *filename)
{
	t_i32	fd;
	t_list	*lst;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (ft_set_error(FT_ERROR_INVALID_FD));
	lst = NULL;
	if (read_into_lst(grid, fd, &lst) != OK)
	{
		close(fd);
		clear_leftover_gnl_lines(fd);
		return (ft_any_error());
	}
	close(fd);
	ft_lst_reverse(&lst);
	if (transfer_lst_to_array(lst, &grid->cells) != OK)
	{
		ft_lstclear(&lst, &ft_free);
		return (ft_any_error());
	}
	ft_lstclear(&lst, NULL);
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////
