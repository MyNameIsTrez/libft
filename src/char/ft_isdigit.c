/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 15:16:20 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 12:38:46 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if @p chr is a digit.
 *
 * @param chr
 * @return 1 if true, 0 if false.
 */
int	ft_isdigit(int chr)
{
	return ('0' <= chr and chr <= '9');
}
