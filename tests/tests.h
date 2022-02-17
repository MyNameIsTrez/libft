/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tests.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/20 11:42:16 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/17 18:04:23 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef TESTS_H
# define TESTS_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

# include "asserts.h"

////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <fcntl.h>	// open
#include <unistd.h>	// lseek, read, close

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

# define test_io(fn, val, ret)													\
{																				\
	int const	fd = open("/tmp/" #fn "_test", O_RDWR | O_CREAT | O_TRUNC, 0640);	\
	fn(val, fd);																\
	FILE *f = fdopen(fd, "rw");													\
	fseek(f, 0, SEEK_END);														\
	long file_size = ftell(f);													\
	char buf[file_size + 1];													\
	ft_memset(buf, '\0', (size_t)file_size + 1);								\
	lseek(fd, 0, SEEK_SET);														\
	read(fd, buf, (size_t)file_size);											\
	close(fd);																	\
	ASSERT(buf, ret);															\
}

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
