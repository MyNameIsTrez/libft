/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rejoin_split.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/10 17:14:08 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/22 17:31:25 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

STATIC size_t	get_rejoined_len(char **split, size_t sep_len)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (split[i] != NULL)
	{
		len += ft_strlen(split[i]) + sep_len;
		i++;
	}
	return (len - sep_len);
}

STATIC void	fill_rejoin(char *rejoined, char **split, char *sep,
				size_t rejoined_len)
{
	size_t	i;

	i = 0;
	while (split[i] != NULL)
	{
		if (i != 0)
			ft_strlcat(rejoined, sep, rejoined_len + 1);
		ft_strlcat(rejoined, split[i], rejoined_len + 1);
		i++;
	}
}

/**
 * @brief ft_rejoin_split(ft_split_str("A A", "A"), "B") -> "B B"
 *
 * @param split gotten from calling ft_split_str()
 * @param sep
 * @return
 */
char	*ft_rejoin_split(char **split, char *sep)
{
	size_t	sep_len;
	char	*rejoined;
	size_t	rejoined_len;

	sep_len = ft_strlen(sep);
	rejoined_len = get_rejoined_len(split, sep_len);
	rejoined = ft_stralloc(rejoined_len);
	if (rejoined == NULL)
		return (NULL);
	fill_rejoin(rejoined, split, sep, rejoined_len);
	return (rejoined);
}

////////////////////////////////////////////////////////////////////////////////
