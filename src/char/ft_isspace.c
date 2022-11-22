/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 13:47:28 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 16:49:33 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Checks whether @p chr is whitespace. Returns false
 * if @p chr is '\0'.
 *
 * @param chr
 * @return
 */
bool	ft_isspace(const t_i32 chr)
{
	return (chr != '\0' && ft_strchr(WHITESPACE, chr));
}

////////////////////////////////////////////////////////////////////////////////
