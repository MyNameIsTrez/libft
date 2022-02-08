/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   asserts.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-wij <mvan-wij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/27 11:18:47 by mvan-wij      #+#    #+#                 */
/*   Updated: 2022/02/08 17:15:09 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_ASSERT_H
# define MY_ASSERT_H

# define pragma(p) _Pragma(#p)
// # define ignore_gcc_error(p) _Pragma("GCC diagnostic ignored "#p)
# define ignore_gcc_error(p) pragma(GCC diagnostic ignored p)

#define ignore_gcc_errors				\
	ignore_gcc_error("-Wall")			\
	ignore_gcc_error("-Wextra")			\
	ignore_gcc_error("-Wconversion")

# ifndef DEBUG_VALUE_INPUT_NAME
#  define DEBUG_VALUE_INPUT_NAME value_input
# endif
# ifndef DEBUG_EXPECT_INPUT_NAME
#  define DEBUG_EXPECT_INPUT_NAME expect_input
# endif
# ifndef DEBUG_VALUE_VALUE
#  define DEBUG_VALUE_VALUE value
# endif
# ifndef DEBUG_EXPECT_VALUE
#  define DEBUG_EXPECT_VALUE expect
# endif

# include <stdio.h>
# include <stdlib.h> // abort
# include <string.h>

# include <stdbool.h>
# include <stdint.h>

typedef enum e_my_assert_typetype {
	TYPENAME_BOOL,
	TYPENAME_UNSIGNED_CHAR,
	TYPENAME_CHAR,
	TYPENAME_SIGNED_CHAR,
	TYPENAME_SHORT_INT,
	TYPENAME_UNSIGNED_SHORT_INT,
	TYPENAME_INT,
	TYPENAME_UNSIGNED_INT,
	TYPENAME_LONG_INT,
	TYPENAME_UNSIGNED_LONG_INT,
	TYPENAME_LONG_LONG_INT,
	TYPENAME_UNSIGNED_LONG_LONG_INT,
	TYPENAME_FLOAT,
	TYPENAME_DOUBLE,
	TYPENAME_LONG_DOUBLE,
	TYPENAME_CHAR_PTR,
	TYPENAME_VOID_PTR,
	TYPENAME_INT_PTR,
	TYPENAME_UNKNOWN
}	t_my_assert_typetype;

const static char *g_my_assert_typename[] = {
	[TYPENAME_BOOL] = "bool",
	[TYPENAME_UNSIGNED_CHAR] = "unsigned char",
	[TYPENAME_CHAR] = "char",
	[TYPENAME_SIGNED_CHAR] = "signed char",
	[TYPENAME_SHORT_INT] = "short int",
	[TYPENAME_UNSIGNED_SHORT_INT] = "unsigned short int",
	[TYPENAME_INT] = "int",
	[TYPENAME_UNSIGNED_INT] = "unsigned int",
	[TYPENAME_LONG_INT] = "long int",
	[TYPENAME_UNSIGNED_LONG_INT] = "unsigned long int",
	[TYPENAME_LONG_LONG_INT] = "long long int",
	[TYPENAME_UNSIGNED_LONG_LONG_INT] = "unsigned long long int",
	[TYPENAME_FLOAT] = "float",
	[TYPENAME_DOUBLE] = "double",
	[TYPENAME_LONG_DOUBLE] = "long double",
	[TYPENAME_CHAR_PTR] = "char *",
	[TYPENAME_VOID_PTR] = "void *",
	[TYPENAME_INT_PTR] = "int *",
	[TYPENAME_UNKNOWN] = "unknown"
};

# define typetype(x) _Generic((x),															\
	_Bool:					TYPENAME_BOOL,													\
	unsigned char:			TYPENAME_UNSIGNED_CHAR,											\
	char:					TYPENAME_CHAR,													\
	signed char:			TYPENAME_SIGNED_CHAR,											\
	short int:				TYPENAME_SHORT_INT,												\
	unsigned short int:		TYPENAME_UNSIGNED_SHORT_INT,									\
	int:					TYPENAME_INT,													\
	unsigned int:			TYPENAME_UNSIGNED_INT,											\
	long int:				TYPENAME_LONG_INT,												\
	unsigned long int:		TYPENAME_UNSIGNED_LONG_INT,										\
	long long int:			TYPENAME_LONG_LONG_INT,											\
	unsigned long long int:	TYPENAME_UNSIGNED_LONG_LONG_INT,								\
	float:					TYPENAME_FLOAT,													\
	double:					TYPENAME_DOUBLE,												\
	long double:			TYPENAME_LONG_DOUBLE,											\
	char *:					TYPENAME_CHAR_PTR,												\
	void *:					TYPENAME_VOID_PTR,												\
	int *:					TYPENAME_INT_PTR,												\
	default:				TYPENAME_UNKNOWN												\
)

# define assert_bool(a, b)																	\
{																							\
	char	*buf1;																			\
	char	*buf2;																			\
	int		len1;																			\
	int		len2;																			\
	int		len;																			\
	char	*DEBUG_VALUE_INPUT_NAME = #a;															\
	bool	DEBUG_VALUE_VALUE = (bool)(intmax_t)a;												\
	char	*DEBUG_EXPECT_INPUT_NAME = #b;														\
	bool	DEBUG_EXPECT_VALUE = (bool)(intmax_t)b;												\
	if (DEBUG_VALUE_VALUE != DEBUG_EXPECT_VALUE)														\
	{																						\
		len1 = asprintf(&buf1, #a);															\
		len2 = asprintf(&buf2, "%s", a ? "true" : "false");									\
		len = len1 > len2 ? len1 : len2;													\
		printf("%*s == "#b":\n%*s == %s\n", len, buf1, len, buf2, b ? "true" : "false");	\
		free(buf1);																			\
		free(buf2);																			\
		abort();																			\
	}																						\
}

# define assert_signed_char(a, b)															\
{																							\
	char	*buf1;																			\
	char	*buf2;																			\
	int		len1;																			\
	int		len2;																			\
	int		len;																			\
	char	*DEBUG_VALUE_INPUT_NAME = #a;															\
	signed char	DEBUG_VALUE_VALUE = (signed char)(intmax_t)a;										\
	char	*DEBUG_EXPECT_INPUT_NAME = #b;														\
	signed char	DEBUG_EXPECT_VALUE = (signed char)(intmax_t)b;									\
	if (DEBUG_VALUE_VALUE != DEBUG_EXPECT_VALUE)														\
	{																						\
		len1 = asprintf(&buf1, #a);															\
		len2 = asprintf(&buf2, "%hhi ('%c')", a, a);										\
		len = len1 > len2 ? len1 : len2;													\
		printf("%*s == "#b":\n%*s == %hhi ('%c')\n", len, buf1, len, buf2, b, b);			\
		free(buf1);																			\
		free(buf2);																			\
		abort();																			\
	}																						\
}

# define assert_unsigned_char(a, b)															\
{																							\
	char	*buf1;																			\
	char	*buf2;																			\
	int		len1;																			\
	int		len2;																			\
	int		len;																			\
	char	*DEBUG_VALUE_INPUT_NAME = #a;															\
	unsigned char	DEBUG_VALUE_VALUE = (unsigned char)(intmax_t)a;								\
	char	*DEBUG_EXPECT_INPUT_NAME = #b;														\
	unsigned char	DEBUG_EXPECT_VALUE = (unsigned char)(intmax_t)b;								\
	if (DEBUG_VALUE_VALUE != DEBUG_EXPECT_VALUE)														\
	{																						\
		len1 = asprintf(&buf1, #a);															\
		len2 = asprintf(&buf2, "%hhu ('%c')", a, a);										\
		len = len1 > len2 ? len1 : len2;													\
		printf("%*s == "#b":\n%*s == %hhu ('%c')\n", len, buf1, len, buf2, b, b);			\
		free(buf1);																			\
		free(buf2);																			\
		abort();																			\
	}																						\
}

# define assert_signed(a, b)																\
{																							\
	char	*buf1;																			\
	char	*buf2;																			\
	int		len1;																			\
	int		len2;																			\
	int		len;																			\
	char	*DEBUG_VALUE_INPUT_NAME = #a;															\
	intmax_t	DEBUG_VALUE_VALUE = (intmax_t)(intmax_t)a;										\
	char	*DEBUG_EXPECT_INPUT_NAME = #b;														\
	intmax_t	DEBUG_EXPECT_VALUE = (intmax_t)(intmax_t)b;										\
	if (DEBUG_VALUE_VALUE != DEBUG_EXPECT_VALUE)														\
	{																						\
		len1 = asprintf(&buf1, #a);															\
		len2 = asprintf(&buf2, "%ji", a);													\
		len = len1 > len2 ? len1 : len2;													\
		printf("%*s == "#b":\n%*s == %ji\n", len, buf1, len, buf2, b);						\
		free(buf1);																			\
		free(buf2);																			\
		abort();																			\
	}																						\
}

# define assert_unsigned(a, b)																\
{																							\
	char	*buf1;																			\
	char	*buf2;																			\
	int		len1;																			\
	int		len2;																			\
	int		len;																			\
	char	*DEBUG_VALUE_INPUT_NAME = #a;															\
	uintmax_t	DEBUG_VALUE_VALUE = (uintmax_t)(intmax_t)a;										\
	char	*DEBUG_EXPECT_INPUT_NAME = #b;														\
	uintmax_t	DEBUG_EXPECT_VALUE = (uintmax_t)(intmax_t)b;										\
	if (DEBUG_VALUE_VALUE != DEBUG_EXPECT_VALUE)														\
	{																						\
		len1 = asprintf(&buf1, #a);															\
		len2 = asprintf(&buf2, "%ju", a);													\
		len = len1 > len2 ? len1 : len2;													\
		printf("%*s == "#b":\n%*s == %ju\n", len, buf1, len, buf2, b);						\
		free(buf1);																			\
		free(buf2);																			\
		abort();																			\
	}																						\
}

# define assert_float(a, b)																	\
{																							\
	char	*buf1;																			\
	char	*buf2;																			\
	int		len1;																			\
	int		len2;																			\
	int		len;																			\
	char	*DEBUG_VALUE_INPUT_NAME = #a;															\
	long double	DEBUG_VALUE_VALUE = (long double)(intmax_t)a;										\
	char	*DEBUG_EXPECT_INPUT_NAME = #b;														\
	long double	DEBUG_EXPECT_VALUE = (long double)(intmax_t)b;									\
	if (DEBUG_VALUE_VALUE != DEBUG_EXPECT_VALUE)														\
	{																						\
		len1 = asprintf(&buf1, #a);															\
		len2 = asprintf(&buf2, "%Lf", a);													\
		len = len1 > len2 ? len1 : len2;													\
		printf("%*s == "#b":\n%*s == %Lf\n", len, buf1, len, buf2, b);						\
		free(buf1);																			\
		free(buf2);																			\
		abort();																			\
	}																						\
}

# define assert_str(a, b)																	\
{																							\
	char	*buf1;																			\
	char	*buf2;																			\
	int		len1;																			\
	int		len2;																			\
	int		len;																			\
	char	*DEBUG_VALUE_INPUT_NAME = #a;															\
	char	*DEBUG_VALUE_VALUE = (char *)(intmax_t)a;												\
	char	*DEBUG_EXPECT_INPUT_NAME = #b;														\
	char	*DEBUG_EXPECT_VALUE = (char *)(intmax_t)b;											\
	if (strcmp(DEBUG_VALUE_VALUE, DEBUG_EXPECT_VALUE) != 0)												\
	{																						\
		len1 = asprintf(&buf1, #a);															\
		len2 = asprintf(&buf2, "\"%s\"", a);												\
		len = len1 > len2 ? len1 : len2;													\
		printf("%*s == "#b":\n%*s == \"%s\"\n", len, buf1, len, buf2, b);					\
		free(buf1);																			\
		free(buf2);																			\
		abort();																			\
	}																						\
}

# define assert_ptr(a, b)																	\
{																							\
	char	*buf1;																			\
	char	*buf2;																			\
	int		len1;																			\
	int		len2;																			\
	int		len;																			\
	char	*DEBUG_VALUE_INPUT_NAME = #a;															\
	void	*DEBUG_VALUE_VALUE = (void	*)(intmax_t)a;											\
	char	*DEBUG_EXPECT_INPUT_NAME = #b;														\
	void	*DEBUG_EXPECT_VALUE = (void	*)(intmax_t)b;											\
	if (DEBUG_VALUE_VALUE != DEBUG_EXPECT_VALUE)														\
	{																						\
		len1 = asprintf(&buf1, #a);															\
		len2 = asprintf(&buf2, "%p", a);													\
		len = len1 > len2 ? len1 : len2;													\
		printf("%*s == "#b":\n%*s == %p\n", len, buf1, len, buf2, b);						\
		free(buf1);																			\
		free(buf2);																			\
		abort();																			\
	}																						\
}

# define do_assert(type, a, b)																\
{																							\
	if (type == TYPENAME_BOOL)																\
		assert_bool(a, b);																	\
	if (type == TYPENAME_UNSIGNED_CHAR)														\
		assert_unsigned_char(a, b);															\
	if (type == TYPENAME_CHAR																\
		|| type == TYPENAME_SIGNED_CHAR)													\
		assert_signed_char(a, b);															\
	if (type == TYPENAME_SHORT_INT															\
		|| type == TYPENAME_INT																\
		|| type == TYPENAME_LONG_INT														\
		|| type == TYPENAME_LONG_LONG_INT)													\
		assert_signed(a, b);																\
	if (type == TYPENAME_UNSIGNED_SHORT_INT													\
		|| type == TYPENAME_UNSIGNED_INT													\
		|| type == TYPENAME_UNSIGNED_LONG_INT												\
		|| type == TYPENAME_UNSIGNED_LONG_LONG_INT)											\
		assert_unsigned(a, b);																\
	if (type == TYPENAME_FLOAT																\
		|| type == TYPENAME_DOUBLE															\
		|| type == TYPENAME_LONG_DOUBLE)													\
		assert_float(a, b);																	\
	if (type == TYPENAME_CHAR_PTR)															\
		assert_str(a, b);																	\
	if (type == TYPENAME_VOID_PTR															\
		|| type == TYPENAME_INT_PTR)														\
		assert_ptr(a, b);																	\
}

# define ASSERT(a, b)																	\
{																							\
	pragma(GCC diagnostic push)																\
	ignore_gcc_errors																		\
																							\
	t_my_assert_typetype	a_type = typetype(a);											\
	t_my_assert_typetype	b_type = typetype(b);											\
																							\
	if (a_type == TYPENAME_UNKNOWN && b_type == TYPENAME_UNKNOWN)							\
	{																						\
		printf("Cannot detect type of <"#a"> and <"#b">");									\
		abort();																			\
	}																						\
	if (a_type == TYPENAME_UNKNOWN)															\
	{																						\
		printf("Cannot detect type of <"#a">");												\
		abort();																			\
	}																						\
	if (b_type == TYPENAME_UNKNOWN)															\
	{																						\
		printf("Cannot detect type of <"#b">");												\
		abort();																			\
	}																						\
	if (a_type != b_type)																	\
	{																						\
		printf("Cannot compare types <%s> and <%s>\n",										\
			g_my_assert_typename[a_type], g_my_assert_typename[b_type]);					\
		abort();																			\
	}																						\
	do_assert(a_type, a, b);																\
	pragma(GCC diagnostic pop)																\
}


#endif
