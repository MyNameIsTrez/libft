/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_put_substr.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/01 16:33:15 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/01 16:35:21 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

void	ft_put_substr_test(char *start, char *end, char *ret)
{
	int stdout_fd = dup(STDOUT_FILENO);
	int const	fd = open("/tmp/ft_put_substr_fd_test", O_RDWR | O_CREAT | O_TRUNC, 0640);
	dup2(fd, STDOUT_FILENO);
	massert((ssize_t)ft_put_substr(start, end), (ssize_t)strlen(ret));
	dup2(stdout_fd, STDOUT_FILENO);
	FILE *f = fdopen(fd, "rw");
	fseek(f, 0, SEEK_END);
	long file_size = ftell(f);
	char buf[file_size + 1];
	ft_memset(buf, '\0', (size_t)file_size + 1);
	lseek(fd, 0, SEEK_SET);
	read(fd, buf, (size_t)file_size);
	close(fd);
	massert(buf, ret);
}

////////////////////////////////////////////////////////////////////////////////

Test(ft_put_substr)
{
	char *str = "abcdef";
	ft_put_substr_test(str, str + 3, "abc");
	ft_put_substr_test(str, strchr(str, 'e'), "abcd");
}

////////////////////////////////////////////////////////////////////////////////
