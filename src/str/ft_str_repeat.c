/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_repeat.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/15 18:25:30 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 16:38:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Returns @p str repeated @p repeat times.
 *
 * @param str
 * @param repeat
 * @return
 */
char	*ft_str_repeat(char *str, size_t repeat)
{
	size_t	str_len;
	size_t	new_bytes;
	char	*new_str;
	size_t	i;

	str_len = ft_strlen(str);
	new_bytes = str_len * repeat;
	new_str = ft_stralloc(new_bytes);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < new_bytes)
	{
		ft_memcpy(&new_str[i], str, str_len);
		i += str_len;
	}
	return (new_str);
}

////////////////////////////////////////////////////////////////////////////////
