/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_lower.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:48:56 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 16:02:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/**
 * @brief Checks if @p chr is lowercase.
 *
 * @param chr
 * @return true or false.
 */
bool	ft_is_lower(char chr)
{
	return ('a' <= chr && chr <= 'z');
}
