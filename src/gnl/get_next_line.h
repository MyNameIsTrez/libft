/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 16:18:52 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/22 14:33:59 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "src/helper_headers/ft_types.h"

char	*get_next_line_without_newline(t_i32 fd);
char	*get_next_line(int fd);
void	clear_get_next_line(int fd);

#endif
