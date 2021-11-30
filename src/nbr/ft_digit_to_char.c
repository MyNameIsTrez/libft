/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EXTRA_ft_digit_to_char.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 13:47:28 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 16:28:00 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a digit to a char.
 *
 * @param nbr
 * @return
 */
char	ft_digit_to_char(const int nbr)
{
	if (0 <= nbr && nbr <= 9)
		return ((char)nbr + '0');
	return ('\0');
}
