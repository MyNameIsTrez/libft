/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_put_substr_fd.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 14:58:15 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 18:20:23 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

void	ft_put_substr_fd_test(char *start, char *end, char *ret, ssize_t on_error)
{
	was_malloc_unstable = false;
	was_write_unstable = false;
	int const	fd = open("/tmp/ft_put_substr_fd_test", O_RDWR | O_CREAT | O_TRUNC, 0640);
	ssize_t	ret_value = ft_put_substr_fd(start, end, fd);
	if (was_malloc_unstable || was_write_unstable)
	{
		massert(ret_value, on_error);
	}
	else
	{
		massert(ret_value, (ssize_t)strlen(ret));
		FILE *f = fdopen(fd, "rw");
		fseek(f, 0, SEEK_END);
		long file_size = ftell(f);
		char buf[file_size + 1];
		memset(buf, '\0', (size_t)file_size + 1);
		lseek(fd, 0, SEEK_SET);
		read(fd, buf, (size_t)file_size);
		massert(buf, ret);
	}
	close(fd);
}

////////////////////////////////////////////////////////////////////////////////

Test(ft_put_substr_fd)
{
	char *str = "abcdef";
	ft_put_substr_fd_test(str, str + 3, "abc", -1);
	ft_put_substr_fd_test(str, strchr(str, 'e'), "abcd", -1);
}

////////////////////////////////////////////////////////////////////////////////
