/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   transfer_lst_to_cells.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 17:21:47 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 18:12:44 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/error/ft_error.h"
#include "src/file/ft_file.h"
#include "src/lst/ft_lst.h"
#include "src/mem/ft_mem.h"

t_status	transfer_lst_to_cells(t_list *lst, t_char_grid *grid,
				char *description)
{
	size_t	i;

	if (grid->width == 0 || grid->height == 0)
		return (ft_set_error(FT_ERROR_EMPTY_FILE));
	grid->cells = ft_malloc(grid->width * grid->height, sizeof(t_u8),
			description);
	if (grid->cells == NULL)
		return (ERROR);
	i = 0;
	while (lst != NULL)
	{
		ft_memcpy(&grid->cells[i * grid->width], lst->content, grid->width);
		lst = lst->next;
		i++;
	}
	return (OK);
}
