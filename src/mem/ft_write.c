/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_write.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 11:01:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 17:12:49 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>

/**
 * @brief Used so my tester can check whether programs still work
 * when write() fails.
 *
 * @param fildes
 * @param buf
 * @param nbyte
 * @return -1 if this call was set to fail
 */
#ifdef CTESTER
# include "src/ctester_globals.h"

ssize_t	ft_write(int fildes, const void *buf, size_t nbyte)
{
	write_call_count++;
	if (write_call_count != write_call_count_to_fail)
		return (write(fildes, buf, nbyte));
	was_write_unstable = true;
	return (-1);
}
#else

ssize_t	ft_write(int fildes, const void *buf, size_t nbyte)
{
	return (write(fildes, buf, nbyte));
}
#endif
