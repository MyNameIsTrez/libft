/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:22:44 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/29 13:04:38 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_LST_H
# define FT_LST_H

////////////////////////////////////////////////////////////////////////////////

# include <stddef.h>

////////////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////////////

size_t	ft_lst_content_size(t_list *lst, size_t (*counter)(const void *));
t_list	*ft_lst_new_back(t_list **lst_ptr, void *content);
t_list	*ft_lst_new_front(t_list **lst_ptr, void *content);
void	ft_lst_remove_if(t_list **lst, void *needle,
			int (*cmp_fn)(void *lst_content, void *needle));
t_list	*ft_lst_reverse(t_list **lst_ptr);
void	**ft_lst_to_array(t_list *lst);
void	ft_lstadd_back(t_list **lst_ptr, t_list *new);
void	ft_lstadd_front(t_list **lst_ptr, t_list *new);
void	ft_lstclear(t_list **lst_ptr, void (*del)(void *));
void	ft_lstdelone(t_list **lst_ptr, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*fun)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*fun)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
size_t	ft_lstsize(t_list *lst);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
