/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_upper.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:48:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 16:02:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/**
 * @brief Checks if @p chr is uppercase.
 *
 * @param chr
 * @return true or false.
 */
bool	ft_is_upper(char chr)
{
	return ('A' <= chr && chr <= 'Z');
}
