/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 12:38:39 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if @p chr is alphanumeric.
 *
 * @param chr
 * @return 1 if true, 0 if false.
 */
int	ft_isalnum(int chr)
{
	return (ft_isalpha(chr) || ft_isdigit(chr));
}
