/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_grid_from_file.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 16:53:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/22 16:29:41 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_success	read_into_lst(t_grid *grid, int fd, t_list **lst_ptr);

////////////////////////////////////////////////////////////////////////////////

STATIC void	clear_leftover_gnl_lines(int fd)
{
	while (get_next_line(fd))
	{
	}
}

STATIC t_success	transfer_lst_to_array(t_list *lst, char ***cells)
{
	*cells = (char **)ft_lst_to_array(lst);
	if (*cells == NULL)
		return (ERROR);
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief
 *
 * @param grid
 * @param filename
 * @return
 */
t_success	ft_read_grid_from_file(t_grid *grid, char *filename)
{
	const int	fd = open(filename, O_RDONLY);
	t_list		*lst;

	if (fd < 0)
		return (ERROR);
	lst = NULL;
	if (read_into_lst(grid, fd, &lst) != SUCCESS)
	{
		close(fd);
		ft_lstclear(&lst, &free);
		clear_leftover_gnl_lines(fd);
		return (ERROR);
	}
	close(fd);
	ft_lst_reverse(&lst);
	if (transfer_lst_to_array(lst, &grid->cells) != SUCCESS)
	{
		ft_lstclear(&lst, &free);
		return (ERROR);
	}
	ft_lstclear(&lst, NULL);
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////
