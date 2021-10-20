/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EXTRA_ft_get_number_len.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 12:00:48 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/20 13:16:36 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_get_number_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0 || n == 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
