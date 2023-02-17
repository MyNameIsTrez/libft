/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_private_file.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 17:20:24 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 18:12:44 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRIVATE_FILE_H
# define FT_PRIVATE_FILE_H

# include "src/error/ft_error.h"
# include "src/file/ft_file.h"
# include "src/lst/ft_lst.h"

t_status	helper_read_into_lst(t_char_grid *grid, t_i32 fd, char *line,
				t_list **lst_ptr);
t_status	read_into_lst(t_char_grid *grid, t_i32 fd, t_list **lst_ptr);
t_status	transfer_lst_to_cells(t_list *lst, t_char_grid *grid);

#endif
