/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tests.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/20 11:42:16 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/24 14:19:20 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef TESTS_H
# define TESTS_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

# include "massert.h"

// # define custom_assert_types	\
// 	add_assert_type(t_list *, lst_eq, lst_as_str)

////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>		// malloc, free, exit
#include <fcntl.h>		// open
#include <unistd.h>		// lseek, read, close
#include <sys/wait.h>	// wait

////////////////////////////////////////////////////////////////////////////////

typedef void (*void_fn)(void);

typedef struct s_fn_info {
	char	*fn_name;
	void_fn	fn_ptr;
}	t_fn_info;

////////////////////////////////////////////////////////////////////////////////

extern t_list	*g_tests_lst;

////////////////////////////////////////////////////////////////////////////////

#define Test(name)																\
	void test_##name(void);														\
	__attribute__((constructor))												\
	void add_test_##name(void)													\
	{																			\
		static t_fn_info fn_info = {.fn_name = #name, .fn_ptr = &test_##name};	\
		ft_lst_new_front(&g_tests_lst, &fn_info);								\
	}																			\
	void test_##name(void)

////////////////////////////////////////////////////////////////////////////////

# define test_io_fd(fn, val, ret, ...)												\
{																					\
	int const	fd = open("/tmp/" #fn "_test", O_RDWR | O_CREAT | O_TRUNC, 0640);	\
	massert(fn(val, fd), (ssize_t)(__VA_ARGS__+strlen(ret)));						\
	FILE *f = fdopen(fd, "rw");														\
	fseek(f, 0, SEEK_END);															\
	long file_size = ftell(f);														\
	char buf[file_size + 1];														\
	ft_memset(buf, '\0', (size_t)file_size + 1);									\
	lseek(fd, 0, SEEK_SET);															\
	read(fd, buf, (size_t)file_size);												\
	close(fd);																		\
	massert(buf, ret);																\
}

# define test_io(fn, val, ret, ...)														\
{																						\
	if (fork() == 0)																	\
	{																					\
		int const	fd = open("/tmp/" #fn "_test", O_RDWR | O_CREAT | O_TRUNC, 0640);	\
		dup2(fd, STDOUT_FILENO);														\
		massert(fn(val), (ssize_t)(__VA_ARGS__+strlen(ret)));							\
		FILE *f = fdopen(fd, "rw");														\
		fseek(f, 0, SEEK_END);															\
		long file_size = ftell(f);														\
		char buf[file_size + 1];														\
		ft_memset(buf, '\0', (size_t)file_size + 1);									\
		lseek(fd, 0, SEEK_SET);															\
		read(fd, buf, (size_t)file_size);												\
		close(fd);																		\
		massert(buf, ret);																\
		exit(EXIT_SUCCESS);																\
	}																					\
	wait(NULL);																			\
}

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
