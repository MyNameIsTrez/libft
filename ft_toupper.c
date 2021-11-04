/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:39:51 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 14:08:19 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a lower-case letter to its corresponding upper-case letter.
 *
 * @param chr
 * @return If the argument is a lower-case letter, the corresponding upper-case
   letter is returned if there is one;\n
   Otherwise, the argument is returned unchanged.
 */
int	ft_toupper(int chr)
{
	if ('a' <= chr && chr <= 'z')
		return (chr - ('a' - 'A'));
	return (chr);
}
