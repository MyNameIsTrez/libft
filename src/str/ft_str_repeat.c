/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_repeat.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/15 18:25:30 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 14:08:17 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>	// malloc

////////////////////////////////////////////////////////////////////////////////

char	*ft_str_repeat(char *str, size_t repeat)
{
	size_t const	str_len = ft_strlen(str);
	size_t const	new_bytes = str_len * repeat;
	char *const		new_str = ft_stralloc(new_bytes);
	size_t			i;

	i = 0;
	while (i < new_bytes)
	{
		ft_memcpy(&new_str[i], str, str_len);
		i += str_len;
	}
	return (new_str);
}

////////////////////////////////////////////////////////////////////////////////
