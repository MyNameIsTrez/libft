/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_file.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:21:15 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/17 17:51:27 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_FILE_H
# define LIBFT_FILE_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

////////////////////////////////////////////////////////////////////////////////

# include "get_next_line.h"

////////////////////////////////////////////////////////////////////////////////

# include "fcntl.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct s_grid
{
	char	**cells;
	int		width;
	int		height;
}	t_grid;

////////////////////////////////////////////////////////////////////////////////

t_success	ft_read_grid_from_file(t_grid *grid, char *filename);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
