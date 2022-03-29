/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tests.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/20 11:42:16 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 16:03:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef TESTS_H
# define TESTS_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

# include "massert.h"

////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>		// malloc, free, exit
#include <fcntl.h>		// open
#include <unistd.h>		// lseek, read, close
#include <sys/wait.h>	// wait

// For Unix
#include <ctype.h>		// isalpha, ...
#include <string.h>		// strlcat, strlcpy

////////////////////////////////////////////////////////////////////////////////

typedef void (*void_fn)(void);

typedef struct s_fn_info {
	char	*fn_name;
	void_fn	fn_ptr;
}	t_fn_info;

////////////////////////////////////////////////////////////////////////////////

extern t_list	*g_tests_lst;

////////////////////////////////////////////////////////////////////////////////

t_list	*test_lstnew(void *content);
t_list	*test_lst_new_front(t_list **lst, void *content);

////////////////////////////////////////////////////////////////////////////////

#define Test(name)																\
	void test_##name(void);														\
	__attribute__((constructor))												\
	void add_test_##name(void)													\
	{																			\
		static t_fn_info fn_info = {.fn_name = #name, .fn_ptr = &test_##name};	\
		test_lst_new_front(&g_tests_lst, &fn_info);								\
	}																			\
	void test_##name(void)

////////////////////////////////////////////////////////////////////////////////

# define test_io_fd(fn, val, ret, on_error, ...)									\
{																					\
	was_malloc_unstable = false;													\
	was_write_unstable = false;														\
	int const	fd = open("/tmp/" #fn "_test", O_RDWR | O_CREAT | O_TRUNC, 0640);	\
	ssize_t	ret_value = fn(val, fd);												\
	if (was_malloc_unstable OR was_write_unstable)									\
	{																				\
		massert(ret_value, (ssize_t)(on_error));									\
	}																				\
	else																			\
	{																				\
		massert(ret_value, (ssize_t)(__VA_ARGS__ + strlen(ret)));					\
		FILE *f = fdopen(fd, "rw");													\
		fseek(f, 0, SEEK_END);														\
		long file_size = ftell(f);													\
		char buf[file_size + 1];													\
		memset(buf, '\0', (size_t)file_size + 1);									\
		lseek(fd, 0, SEEK_SET);														\
		read(fd, buf, (size_t)file_size);											\
		massert(buf, ret);															\
	}																				\
	close(fd);																		\
}

# define test_io(fn, val, ret, on_error, ...)										\
{																					\
	was_malloc_unstable = false;													\
	was_write_unstable = false;														\
	int stdout_fd = dup(STDOUT_FILENO);												\
	int const	fd = open("/tmp/" #fn "_test", O_RDWR | O_CREAT | O_TRUNC, 0640);	\
	dup2(fd, STDOUT_FILENO);														\
	ssize_t	ret_value = fn(val);													\
	dup2(stdout_fd, STDOUT_FILENO);													\
	if (was_malloc_unstable OR was_write_unstable)									\
	{																				\
		massert(ret_value, (ssize_t)(on_error));									\
	}																				\
	else																			\
	{																				\
		massert(ret_value, (ssize_t)(__VA_ARGS__ + strlen(ret)));					\
		FILE *f = fdopen(fd, "rw");													\
		fseek(f, 0, SEEK_END);														\
		long file_size = ftell(f);													\
		char buf[file_size + 1];													\
		memset(buf, '\0', (size_t)file_size + 1);									\
		lseek(fd, 0, SEEK_SET);														\
		read(fd, buf, (size_t)file_size);											\
		massert(buf, ret);															\
	}																				\
	close(fd);																		\
}

////////////////////////////////////////////////////////////////////////////////

#define m_safe_assert(type, input, expected, on_error)	\
{														\
	was_malloc_unstable = false;						\
	was_write_unstable = false;							\
	type input_value = input;							\
	(void)input_value;									\
	if (was_malloc_unstable OR was_write_unstable)		\
	{													\
		massert(input_value, (type)on_error);			\
	}													\
	else												\
	{													\
		massert(input_value, (type)expected);			\
	}													\
}

#define m_safe_string_assert(input, expected)		\
{													\
	m_safe_assert(char *, input, expected, NULL);	\
}

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
