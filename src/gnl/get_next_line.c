/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/18 17:35:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/25 14:56:10 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "utils/get_next_line_utils.h"

////////////////////////////////////////////////////////////////////////////////

STATIC char	*gnl_malloc_line(t_buffer_list *lst)
{
	size_t	len;
	char	*line;
	char	*nl;

	if (lst->size == 0)
		return (NULL);
	len = 0;
	while (lst->next != NULL)
	{
		len += (size_t)(lst->size - lst->start);
		lst = lst->next;
	}
	nl = gnl_find_newline(lst);
	if (nl == NULL)
		len += (size_t)lst->size;
	else
		len += (size_t)(nl - (lst->buf + lst->start)) + 1;
	line = ft_malloc(len + 1, sizeof(char));
	if (line == NULL)
		return (NULL);
	if (nl != NULL)
		line[len - 1] = '\n';
	line[len] = '\0';
	return (line);
}

// if (j != (*lst)->size && j + 1 < (*lst)->size)
// if (j < (*lst)->size && j + 1 < (*lst)->size)
STATIC char	*gnl_create_line(t_buffer_list **lst)
{
	char			*line;
	ssize_t			i;
	ssize_t			j;

	line = gnl_malloc_line(*lst);
	if (line == NULL)
		return (gnl_lst_clear(lst));
	i = 0;
	while (*lst != NULL)
	{
		j = (*lst)->start;
		while (j < (*lst)->size && (*lst)->buf[j] != '\n')
		{
			line[i] = (*lst)->buf[j];
			i++;
			j++;
		}
		if (j + 1 < (*lst)->size)
		{
			(*lst)->start = j + 1;
			return (line);
		}
		gnl_next(lst);
	}
	return (line);
}

STATIC t_buffer_list	**get_lst_fd(int fd)
{
	static t_buffer_list	*lst_fds[OPEN_FD_MAX];

	return (&lst_fds[fd]);
}

////////////////////////////////////////////////////////////////////////////////

void	clear_get_next_line(int fd)
{
	gnl_lst_clear(get_lst_fd(fd));
}

/**
 * @brief Gets the next line from @p fd, including the newline.
 * In order to check for errors, use ft_any_error()
 * @param fd The file descriptor to read from.
 * @return The next line from @p fd.
 */
char	*get_next_line(int fd)
{
	t_buffer_list			**lst;
	t_buffer_list			*cur;

	if (fd < 0 || fd >= OPEN_FD_MAX || BUFFER_SIZE < 1)
		return (NULL);
	lst = get_lst_fd(fd);
	if (gnl_find_newline(*lst))
		return (gnl_create_line(lst));
	cur = gnl_lst_new_back(lst);
	if (cur == NULL)
		return (NULL);
	cur->size = read(fd, cur->buf, BUFFER_SIZE);
	while (gnl_find_newline(cur) == NULL && cur->size > 0)
	{
		cur = gnl_lst_new_back(lst);
		if (cur == NULL)
			return (gnl_lst_clear(lst));
		cur->size = read(fd, cur->buf, BUFFER_SIZE);
	}
	if (cur->size < 0)
	{
		ft_set_error(FT_ERROR_READ);
		return (gnl_lst_clear(lst));
	}
	return (gnl_create_line(lst));
}

////////////////////////////////////////////////////////////////////////////////
