/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_unstable_write.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 13:43:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 18:40:06 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft_unstable_write.h"

////////////////////////////////////////////////////////////////////////////////

#include <unistd.h>		// write
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
	write_call_count++;
	if (write_call_count != write_call_count_to_fail)
		return (write(fildes, buf, nbyte));
	was_write_unstable = true;
	return (-1);
}

////////////////////////////////////////////////////////////////////////////////
