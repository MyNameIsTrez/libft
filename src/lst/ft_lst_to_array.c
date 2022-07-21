/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst_to_array.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 12:04:13 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 11:33:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

void	**ft_lst_to_array(t_list *lst)
{
	void	**array;
	t_i32	i;

	array = ft_malloc(sizeof(void *) * ft_lstsize(lst));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (lst != NULL)
	{
		array[i] = lst->content;
		lst = lst->next;
		i++;
	}
	return (array);
}

////////////////////////////////////////////////////////////////////////////////
