/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_grid_from_file_utils.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:46:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/23 11:12:58 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

STATIC char	*get_next_line_without_newline(int fd)
{
	char	*line;
	char	*nl_ptr;

	system("leaks tester -q");
	line = get_next_line(fd);
	if (line == NULL)
		return (NULL);
	nl_ptr = ft_strchr(line, '\n');
	if (nl_ptr != NULL)
		*nl_ptr = '\0';
	system("leaks tester -q");
	return (line);
}

STATIC t_success	helper_read_into_lst(t_grid *grid, int fd, char *line,
											t_list **lst_ptr)
{
	grid->width = 0;
	grid->height = 0;
	if (line != NULL)
		grid->width = ft_strlen(line);
	system("leaks tester -q");
	while (line != NULL)
	{
		grid->height++;
		line = get_next_line_without_newline(fd);
		if (line == NULL)
			break ;
		if (ft_strlen(line) != grid->width
			|| ft_lst_new_front(lst_ptr, line) == NULL)
		{
			ft_free(&line);
			return (ERROR);
		}
	}
	system("leaks tester -q");
	return (SUCCESS);
}

t_success	read_into_lst(t_grid *grid, int fd, t_list **lst_ptr)
{
	char	*line;

	system("leaks tester -q");
	line = get_next_line_without_newline(fd);
	if (ft_lst_new_front(lst_ptr, line) == NULL)
	{
		ft_lstclear(lst_ptr, &free);
		ft_free(&line);
		return (ERROR);
	}
	system("leaks tester -q");
	if (helper_read_into_lst(grid, fd, line, lst_ptr) != SUCCESS)
	{
		ft_lstclear(lst_ptr, &free);
		return (ERROR);
	}
	system("leaks tester -q");
	return (SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////
