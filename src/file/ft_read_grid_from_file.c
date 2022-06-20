/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_grid_from_file.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 16:53:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/17 17:49:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

STATIC t_success	read_width_and_height(t_grid *grid, int fd)
{
	grid->width = 0;
	grid->height = 0;

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
