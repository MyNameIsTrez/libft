/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:31 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/24 14:13:30 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

static ssize_t	write_digits(int nbr, size_t nbr_len, int fd)
{
	int		nbr_copy;
	int		digit;
	size_t	i;
	size_t	j;

	if (nbr == 0)
		return (ft_putchar_fd('0', fd));
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
	return ((ssize_t)nbr_len);
}

/**
 * @brief Writes an int.
 *
 * @param nbr The integer to output.
 * @param fd The file descriptor on which to write.
 */
ssize_t	ft_putnbr_fd(int nbr, int fd)
{
	ssize_t	len;

	len = 0;
	if (nbr < 0)
		len += ft_putchar_fd('-', fd);
	len += write_digits(nbr, ft_get_digit_count(nbr), fd);
	return (len);
}
