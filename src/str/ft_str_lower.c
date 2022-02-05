/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_lower.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:34:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 15:01:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Lowercases all alphabetical characters in @p str.
 *
 * @param str
 * @return
 */
char	*ft_str_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = (char)ft_tolower(str[i]);
		i++;
	}
	return (str);
}
