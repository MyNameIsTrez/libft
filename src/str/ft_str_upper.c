/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_upper.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:34:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 14:51:38 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Uppercases all alphabetical characters in @p str.
 *
 * @param str
 * @return
 */
char	*ft_str_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = (char)ft_toupper(str[i]);
		i++;
	}
	return (str);
}
