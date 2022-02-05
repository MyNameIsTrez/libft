#include "tests.h"

Test(ft_split_str, basic_test)
{
	char	*str = "foo1ABABfoo2ABfoo3";
	char	*sep = "AB";
	char	**split_str = ft_split_str(str, sep);

	cr_assert_str_eq(split_str[0], "foo1");
	cr_assert_str_eq(split_str[1], "");
	cr_assert_str_eq(split_str[2], "");
	cr_assert_str_eq(split_str[3], "foo2");
	cr_assert_str_eq(split_str[4], "");
	cr_assert_str_eq(split_str[5], "foo3");
	cr_assert_null(split_str[6]);

	ft_free_split(&split_str);
}
