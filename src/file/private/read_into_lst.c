/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   read_into_lst.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 17:21:12 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 18:12:44 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/file/private/ft_private_file.h"
#include "src/gnl/get_next_line.h"

t_status	read_into_lst(t_char_grid *grid, t_i32 fd, t_list **lst_ptr)
{
	char	*line;

	line = get_next_line_without_newline(fd);
	if (ft_lst_new_front(lst_ptr, line, "line t_list node") == NULL)
	{
		ft_lstclear(lst_ptr, NULL);
		ft_free(&line);
		return (ERROR);
	}
	if (helper_read_into_lst(grid, fd, line, lst_ptr) != OK)
	{
		ft_lstclear(lst_ptr, NULL);
		return (ft_any_error());
	}
	return (OK);
}
