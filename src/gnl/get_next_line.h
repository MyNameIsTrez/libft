/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/18 17:35:33 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 16:19:02 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

////////////////////////////////////////////////////////////////////////////////

// TODO: Remove these?
# include <stddef.h> // size_t
# include <sys/types.h> // ssize_t
# include <limits.h> // OPEN_MAX
# include <unistd.h> // read

////////////////////////////////////////////////////////////////////////////////

# ifndef OPEN_MAX
#  define OPEN_MAX FD_SETSIZE
# endif

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
