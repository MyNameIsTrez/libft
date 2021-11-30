/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 15:16:20 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 12:38:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if @p chr is alphabetic.
 *
 * @param chr
 * @return 1 if true, 0 if false.
 */
int	ft_isalpha(int chr)
{
	return (('A' <= chr && chr <= 'Z') || ('a' <= chr && chr <= 'z'));
}
