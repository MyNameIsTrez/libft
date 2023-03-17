/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst_to_array.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 12:04:13 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/22 20:52:02 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/helper_headers/ft_types.h"
#include "src/lst/ft_lst.h"

void	**ft_lst_to_array(t_list *lst, char *description)
{
	void	**array;
	t_i32	i;

	array = ft_malloc(ft_lstsize(lst), sizeof(void *), description);
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
