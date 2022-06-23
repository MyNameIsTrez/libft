/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_grid_from_file.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 16:53:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/23 11:13:13 by sbos          ########   odam.nl         */
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
	system("leaks tester -q");
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
	system("leaks tester -q");
	lst = NULL;
	if (read_into_lst(grid, fd, &lst) != SUCCESS)
	{
		close(fd);
		system("leaks tester -q");
		clear_leftover_gnl_lines(fd);
		system("leaks tester -q");
		return (ERROR);
	}
	close(fd);
	system("leaks tester -q");
	ft_lst_reverse(&lst);
	system("leaks tester -q");
	if (transfer_lst_to_array(lst, &grid->cells) != SUCCESS)
	{
		ft_lstclear(&lst, &free);
		return (ERROR);
	}
	system("leaks tester -q");
	ft_lstclear(&lst, NULL);
	system("leaks tester -q");
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////
