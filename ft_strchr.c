/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:22 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/08 11:16:41 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first @p chr in @p str.
 *
 * @param str
 * @param chr
 * @return A pointer to the first @p chr in @p str;\n
   NULL if @p chr isn't in @p str.
 */
char	*ft_strchr(const char *str, int chr)
{
	return (ft_memchr(str, chr, ft_strlen(str) + 1));
}
