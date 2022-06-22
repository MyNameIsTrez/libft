/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_grid_from_file.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 16:53:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/22 15:12:16 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

STATIC void	clear_leftover_gnl_lines(int fd)
{
	printf("clear_leftover_gnl_lines() start");
	system("leaks -q tester");
	while (get_next_line(fd))
	{
	}
	printf("clear_leftover_gnl_lines() end");
	system("leaks -q tester");
}

STATIC t_success	transfer_lst_to_array(t_list *lst, char **cells)
{
	printf("transfer_lst_to_array() start");
	system("leaks -q tester");
	cells = (char **)ft_lst_to_array(lst);
	if (cells == NULL)
	{
		ft_lstclear(&lst, &free);
		return (ERROR);
	}
	ft_lstclear(&lst, NULL);
	printf("transfer_lst_to_array() end");
	system("leaks -q tester");
	return (SUCCESS);
}

STATIC char	*get_next_line_without_newline(int fd)
{
	char	*original_line;
	char	*line;

	printf("get_next_line_without_newline() start");
	system("leaks -q tester");
	original_line = get_next_line(fd);
	if (original_line == NULL)
		return (NULL);
	line = ft_strtrim(original_line, "\n");
	free(original_line);
	printf("get_next_line_without_newline() end");
	system("leaks -q tester");
	return (line);
}

STATIC t_success	helper_read_into_lst(t_grid *grid, int fd, char *line,
											t_list **lst_ptr)
{
	grid->width = 0;
	grid->height = 0;
	if (line != NULL)
		grid->width = ft_strlen(line);
	printf("helper_read_into_lst() start");
	system("leaks -q tester");
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
	printf("helper_read_into_lst() end");
	system("leaks -q tester");
	return (SUCCESS);
}

STATIC t_success	read_into_lst(t_grid *grid, int fd, t_list **lst_ptr)
{
	char	*line;

	printf("read_into_lst() start");
	system("leaks -q tester");
	line = get_next_line_without_newline(fd);
	if (ft_lst_new_front(lst_ptr, line) == NULL)
	{
		free(line);
		return (ERROR);
	}
	if (helper_read_into_lst(grid, fd, line, lst_ptr) != SUCCESS)
	{
		ft_lstclear(lst_ptr, &free); // TODO: Redundant?
		return (ERROR);
	}
	free(line);
	printf("read_into_lst() end");
	system("leaks -q tester");
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////

t_success	ft_read_grid_from_file(t_grid *grid, char *filename)
{
	const int	fd = open(filename, O_RDONLY);
	t_list		*lst;

	printf("ft_read_grid_from_file() start");
	system("leaks -q tester");
	if (fd < 0)
		return (ERROR);
	lst = NULL;
	if (read_into_lst(grid, fd, &lst) != SUCCESS)
	{
		clear_leftover_gnl_lines(fd);
		close(fd);
		return (ERROR);
	}
	if (transfer_lst_to_array(lst, grid->cells) != SUCCESS)
		return (ERROR);
	close(fd);
	printf("ft_read_grid_from_file() end");
	system("leaks -q tester");
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////
