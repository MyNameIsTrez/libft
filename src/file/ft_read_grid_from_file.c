/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_grid_from_file.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 16:53:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/21 13:02:50 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////
STATIC t_success	helper_read_width_and_height(t_grid *grid, int fd,
												char *line, t_list **lst_ptr)
{
	while (line != NULL)
	{
		grid->height++;
		line = get_next_line(fd);
		if (ft_strlen(line) != grid->width
			|| ft_lst_new_front(lst_ptr, line) == NULL)
		{
			ft_lstclear(lst_ptr, &free);
			return (ERROR);
		}
	}
}

STATIC t_success	read_width_and_height(t_grid *grid, int fd)
{
	t_list	*lst;
	char	*line;

	lst = NULL;
	line = get_next_line(fd);
	if (ft_lst_new_front(&lst, line) == NULL)
	{
		free(line);
		return (ERROR);
	}
	grid->width = ft_strlen(line);
	grid->height = 0;
	if (helper_read_width_and_height(grid, fd, line, &lst) != SUCCESS)
		return (ERROR);
	grid->cells = ft_lst_to_array(lst);
	if (grid->cells == NULL)
	{
		ft_lstclear(&lst, &free);
		return (ERROR);
	}
	ft_lstclear(&lst, NULL);
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////

t_success	ft_read_grid_from_file(t_grid *grid, char *filename)
{
	const int	fd = open(filename, O_RDONLY);

	if (fd < 0 || read_width_and_height(grid, fd) != SUCCESS)
		return (ERROR);
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////
