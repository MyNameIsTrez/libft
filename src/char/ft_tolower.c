/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:39:54 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 13:56:22 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts an upper-case letter to its corresponding lower-case letter.
 *
 * @param chr
 * @return If the argument is an upper-case letter, the corresponding lower-case
   letter is returned if there is one;\n
   Otherwise, the argument is returned unchanged.
 */
int	ft_tolower(int chr)
{
	if ('A' <= chr && chr <= 'Z')
		return (chr + ('a' - 'A'));
	return (chr);
}
