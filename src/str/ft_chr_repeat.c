/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chr_repeat.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 19:11:05 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 14:20:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "allocating/ft_allocating.h"
#include "mem/ft_mem.h"
#include "str/ft_str.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Returns @p chr repeated @p repeat times.
 *
 * @param str
 * @param repeat
 * @return
 */
char	*ft_chr_repeat(const char chr, size_t repeat)
{
	char	*str;

	str = ft_stralloc(repeat);
	if (str == NULL)
		return (NULL);
	ft_memset(str, chr, repeat);
	return (str);
}

////////////////////////////////////////////////////////////////////////////////
