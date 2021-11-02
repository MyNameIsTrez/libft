/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EXTRA_ft_digit_to_char.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 13:47:28 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/02 12:36:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	ft_digit_to_char(const int nbr)
{
	if (0 <= nbr && nbr <= 9)
		return ((char)nbr + '0');
	return ('\0');
}
