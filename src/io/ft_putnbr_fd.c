/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:31 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 12:58:06 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_digits(int nbr, size_t nbr_len, int fd)
{
	int		nbr_copy;
	int		digit;
	size_t	i;
	size_t	j;

	if (nbr == 0)
		ft_putchar_fd('0', fd);
	nbr_copy = nbr;
	i = nbr_len;
	while (i > 0)
	{
		nbr_copy = nbr;
		j = i;
		while (j > 0)
		{
			digit = -(nbr_copy % 10);
			nbr_copy /= 10;
			j--;
		}
		ft_putchar_fd(ft_digit_to_char(digit), fd);
		i--;
	}
}

/**
 * @brief Writes an int.
 *
 * @param nbr The integer to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr < 0)
		ft_putchar_fd('-', fd);
	write_digits(nbr, ft_get_digit_count(nbr), fd);
}
