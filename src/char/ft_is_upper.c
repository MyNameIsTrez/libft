/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_upper.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:48:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 14:29:51 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if @p chr is uppercase.
 *
 * @param chr
 * @return 1 if true, 0 if false.
 */
int	ft_is_upper(int chr)
{
	return ('A' <= chr && chr <= 'Z');
}
