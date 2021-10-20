/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:31 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/20 16:22:12 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

static size_t	ft_get_number_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	ft_digit_to_char(int n)
{
	if (0 <= n && n <= 9)
	{
		return (n + '0');
	}
	return ('\0');
}

// [1]23, [2]3, [3]
static void	write_digits(int n, size_t number_len, int fd)
{
	int		n_copy;
	int		i;
	int		j;
	int		digit;
	char	c;

	if (n == 0)
		write(fd, "0", 1);
	n_copy = n;
	i = number_len;
	// printf("number_len: %lu\n\n", number_len);
	while (i > 0)
	{
		n_copy = n;
		j = i;
		while (j > 0)
		{
			digit = -(n_copy % 10);
			// printf("digit: %d, n: %d, i: %d, j: %d\n", digit, n, i, j);
			n_copy /= 10;
			j--;
		}
		c = ft_digit_to_char(digit);
		// printf("writing '%c'\n\n", c);
		write(fd, &c, 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0)
		n = -n;
	else
		write(fd, "-", 1);
	write_digits(n, ft_get_number_len(n) - 1, fd);
}
