/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   asserts.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 17:00:35 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 17:36:11 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef ASSERTS_H
# define ASSERTS_H

////////////////////////////////////////////////////////////////////////////////

# include <stdbool.h>	// bool
# include <assert.h>	// assert()
# include <string.h>	// strcmp()

////////////////////////////////////////////////////////////////////////////////

#define ASSERT_INT(a, b) {					\
	char *tested_var = #a;					\
	(void)tested_var;						\
											\
	int tested_value = a;					\
											\
	char *expected_var = #b;				\
	(void)expected_var;						\
											\
	int expected_value = b;					\
											\
	assert(tested_value == expected_value);	\
}

#define ASSERT_CHAR(a, b) {					\
	char *tested_var = #a;					\
	(void)tested_var;						\
											\
	char tested_value = a;					\
											\
	char *expected_var = #b;				\
	(void)expected_var;						\
											\
	char expected_value = b;				\
											\
	assert(tested_value == expected_value);	\
}

#define ASSERT_BOOL(a, b) {					\
	char *tested_var = #a;					\
	(void)tested_var;						\
											\
	bool tested_value = a;					\
											\
	char *expected_var = #b;				\
	(void)expected_var;						\
											\
	bool expected_value = b;				\
											\
	assert(tested_value == expected_value);	\
}

#define ASSERT_STR(a, b) {								\
	char *tested_var = #a;								\
	(void)tested_var;									\
														\
	char *tested_value = a;								\
														\
	char *expected_var = #b;							\
	(void)expected_var;									\
														\
	char *expected_value = b;							\
														\
	assert(strcmp(tested_value, expected_value) == 0);	\
}

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
