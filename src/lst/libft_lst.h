/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_lst.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:22:44 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/25 17:25:58 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LST_H
# define LIBFT_LST_H

# include <stddef.h>

/**
 * @brief A singly linked list.
 *
 * @param content The data contained in the element.
 * @param next The next element’s address or NULL if it’s the last element.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

size_t	ft_lst_content_size(t_list *lst,
			size_t (*counter)(const void *content));
void	ft_lst_new_back(t_list **lst, void *content);
void	ft_lst_new_front(t_list **lst, void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*fun)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*fun)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

#endif
