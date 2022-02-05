/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_lower.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:48:56 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 14:29:37 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if @p chr is lowercase.
 *
 * @param chr
 * @return 1 if true, 0 if false.
 */
int	ft_is_lower(int chr)
{
	return ('a' <= chr && chr <= 'z');
}
