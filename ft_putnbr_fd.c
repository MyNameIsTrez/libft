/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:31 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 16:46:47 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_number_of_digits(int nbr)
{
	size_t	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static char	ft_digit_to_char(int digit)
{
	if (0 <= digit && digit <= 9)
		return ((char)digit + '0');
	return ('\0');
}

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
 * @param nbr
 * @param fd
 */
void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr >= 0)
		nbr = -nbr;
	else
		ft_putchar_fd('-', fd);
	write_digits(nbr, ft_get_number_of_digits(nbr) - 1, fd);
}
