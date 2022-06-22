/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_grid_from_file.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 16:53:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/22 14:02:41 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

STATIC void	clear_leftover_gnl_lines(int fd)
{
	while (get_next_line(fd))
	{
	}
}

STATIC t_success	put_lst_into_array(t_list *lst, char **cells)
{
	cells = (char **)ft_lst_to_array(lst);
	if (cells == NULL)
	{
		ft_lstclear(&lst, &free);
		return (ERROR);
	}
	ft_lstclear(&lst, NULL);
}

STATIC char	*get_next_line_without_newline(int fd)
{
	char	*original_line;
	char	*line;

	original_line = get_next_line(fd);
	if (original_line == NULL)
		return (NULL);
	line = ft_strtrim(original_line, "\n");
	free(original_line);
	return (line);
}

STATIC t_success	helper_read_into_lst(t_grid *grid, int fd,
												char *line, t_list **lst_ptr)
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
		if (ft_strlen(line) != grid->width
			|| ft_lst_new_front(lst_ptr, line) == NULL)
		{
			free(line);
			ft_lstclear(lst_ptr, &free);
			return (ERROR);
		}
	}
	return (SUCCESS);
}

STATIC t_success	read_into_lst(t_grid *grid, int fd, t_list **lst_ptr)
{
	char	*line;

	line = get_next_line_without_newline(fd);
	if (ft_lst_new_front(lst_ptr, line) == NULL)
	{
		free(line);
		return (ERROR);
	}
	if (helper_read_into_lst(grid, fd, line, lst_ptr) != SUCCESS)
	{
		// ft_lstclear(lst_ptr, &free); // TODO: Redundant?
		return (ERROR);
	}
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////

t_success	ft_read_grid_from_file(t_grid *grid, char *filename)
{
	const int	fd = open(filename, O_RDONLY);
	t_list		*lst;

	if (fd < 0)
		return (ERROR);
	lst = NULL;
	if (read_into_lst(grid, fd, &lst) != SUCCESS)
	{
		clear_leftover_gnl_lines(fd);
		close(fd);
		return (ERROR);
	}
	if (put_lst_into_array(lst, grid->cells) != SUCCESS)
		return (ERROR);
	close(fd);
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////
