/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.h                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/18 17:35:33 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/22 14:17:17 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef GET_NEXT_LINE_UTILS_H
# define GET_NEXT_LINE_UTILS_H

////////////////////////////////////////////////////////////////////////////////

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

////////////////////////////////////////////////////////////////////////////////

typedef struct s_buffer_list {
	char					buf[BUFFER_SIZE];
	ssize_t					size;
	ssize_t					start;
	struct s_buffer_list	*next;
}	t_buffer_list;

////////////////////////////////////////////////////////////////////////////////

t_buffer_list	*gnl_lst_new_back(t_buffer_list **lst);
void			gnl_next(t_buffer_list **lst);
char			*gnl_find_newline(t_buffer_list *lst);
char			*gnl_lst_clear(t_buffer_list **lst);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
