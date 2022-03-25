/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_unstable_write.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 13:43:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 14:11:03 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

// #include <unistd.h>	// write
#include <sys/types.h>	// ssize_t

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Search-and-replace all write() calls with this function so my tester
 * can check whether programs still work when write() fails and returns -1.
 *
 * @param fildes
 * @param buf
 * @param nbyte
 * @return
 */
ssize_t	ft_unstable_write(int fildes, const void *buf, size_t nbyte)
{
	// static size_t	i = 0;
	(void)fildes;
	(void)buf;
	(void)nbyte;

	// i++;
	// if (i == 10)
	return (-1);
	// return (write(fildes, buf, nbyte));
}
