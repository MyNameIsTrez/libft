/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_file.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:21:15 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 18:12:44 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

# include "src/error/ft_error.h"
# include "src/helper_headers/ft_types.h"

# include <stddef.h>

typedef struct s_u8_grid
{
	t_u8	*cells;
	size_t	width;
	size_t	height;
}	t_char_grid;

t_status	ft_read_grid_from_file(t_char_grid *grid, char *filename);

#endif
