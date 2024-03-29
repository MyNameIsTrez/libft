/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chr_in_str.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 12:52:46 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/str/ft_str.h"

/**
 * @brief Returns whether @p chr is in @p str.
 *
 * @param chr
 * @param str
 * @return
 */
bool	ft_chr_in_str(const t_i32 chr, const char *str)
{
	return (ft_strchr(str, chr) != NULL);
}
