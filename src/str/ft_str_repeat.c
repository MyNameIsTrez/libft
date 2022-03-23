/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_repeat.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/15 18:25:30 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 16:57:00 by sbos          ########   odam.nl         */
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
	size_t const	str_len = ft_strlen(str);
	size_t const	new_bytes = str_len * repeat;
	char			*new_str;
	size_t			i;

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
