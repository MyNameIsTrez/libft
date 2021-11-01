/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:58 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 14:38:36 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*fun)(void *))
{
	while (lst != NULL)
	{
		fun(lst->content);
		lst = lst->next;
	}
}
