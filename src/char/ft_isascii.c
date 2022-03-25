/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 12:38:44 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if @p chr is ASCII (non-extended).
 *
 * @param chr
 * @return 1 if true, 0 if false.
 */
int	ft_isascii(int chr)
{
	return (0 <= chr and chr <= 127);
}
