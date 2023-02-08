/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:22 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "mem/ft_mem.h"
#include "str/ft_str.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Locates the first @p chr in @p str, including the '\0'.
 *
 * @param str
 * @param chr
 * @return A pointer to the first @p chr in @p str;\n
   NULL if @p chr isn't in @p str.
 */
char	*ft_strchr(const char *str, t_i32 chr)
{
	return (ft_memchr(str, chr, ft_strlen(str) + 1));
}

////////////////////////////////////////////////////////////////////////////////
