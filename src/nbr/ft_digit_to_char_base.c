/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_digit_to_char_base.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 17:27:53 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/04 17:44:27 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define BASE_CHARACTERS "0123456789abcdef"

/**
 * @brief Converts a digit @p nbr to its corresponding character in @p base.
 *
 * @param nbr
 * @return
 */
char	ft_digit_to_char_base(const int nbr, unsigned int base)
{
	if (0 <= nbr && nbr <= (int)base)
		return (BASE_CHARACTERS[nbr]);
	else
		return ('\0');
}