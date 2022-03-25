/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:31 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 18:14:47 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

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
		if (ft_putchar_fd(ft_digit_to_char(digit), fd) < 0)
			return (-1);
		i--;
	}
	return ((ssize_t)nbr_len);
}

/**
 * @brief Writes an int.
 *
 * @param nbr The integer to output.
 * @param fd The file descriptor to write to.
 */
ssize_t	ft_putnbr_fd(int nbr, int fd)
{
	ssize_t	len;
	ssize_t	tmp;

	len = 0;
	if (nbr < 0)
	{
		tmp = ft_putchar_fd('-', fd);
		if (tmp < 0)
			return (tmp);
		len += tmp;
	}
	tmp = write_digits(nbr, ft_get_digit_count(nbr), fd);
	if (tmp < 0)
		return (tmp);
	len += tmp;
	return (len);
}

////////////////////////////////////////////////////////////////////////////////
