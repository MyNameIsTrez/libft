/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_replace.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:22 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:46:17 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Searches for any occurrence of @p str_search in @p str and replaces
   it with @p str_replace.
 *
 * @param str
 * @param str_search
 * @param str_replace
 */
char	*ft_str_replace(char *str, char *str_search, char *str_replace)
{
	char	**split;
	char	*rejoined;

	split = ft_split_str(str, str_search);
	if (split == NULL)
		return (NULL);
	rejoined = ft_rejoin_split(split, str_replace);
	ft_free_split(&split);
	return (rejoined);
}

////////////////////////////////////////////////////////////////////////////////
