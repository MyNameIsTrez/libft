/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   transfer_lst_to_cells.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 17:21:47 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 18:04:20 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_status	transfer_lst_to_cells(t_list *lst, t_u8_grid *grid)
{
	size_t	i;

	if (grid->width == 0 || grid->height == 0)
		return (ft_set_error(FT_ERROR_EMPTY_FILE));
	grid->cells = ft_malloc(grid->width * grid->height, sizeof(t_u8));
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

////////////////////////////////////////////////////////////////////////////////
