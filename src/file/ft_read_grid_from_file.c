/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_grid_from_file.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 16:53:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/21 15:07:46 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

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

STATIC t_success	helper_read_width_and_height(t_grid *grid, int fd,
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
			ft_lstclear(lst_ptr, &free);
			return (ERROR);
		}
	}
	return (SUCCESS);
}

STATIC t_success	read_width_and_height(t_grid *grid, int fd)
{
	t_list	*lst;
	char	*line;

	lst = NULL;
	line = get_next_line_without_newline(fd);
	if (ft_lst_new_front(&lst, line) == NULL)
	{
		free(line);
		return (ERROR);
	}
	if (helper_read_width_and_height(grid, fd, line, &lst) != SUCCESS)
		return (ERROR);
	grid->cells = (char **)ft_lst_to_array(lst);
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

	if (fd < 0)
		return (ERROR);
	if (read_width_and_height(grid, fd) != SUCCESS)
	{
		close(fd);
		return (ERROR);
	}
	close(fd);
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////
