/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_split.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 12:25:16 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/11 12:29:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Used to free @p split which is returned by ft_split_str().
 *
 * @param split
 */
void	ft_free_split(char ***split)
{
	size_t	i;

	if (split == NULL || *split == NULL)
		return ;
	i = 0;
	while ((*split)[i] != NULL)
	{
		free((*split)[i]);
		i++;
	}
	free(*split);
	*split = NULL;
}
