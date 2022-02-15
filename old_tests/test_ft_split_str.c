#include "tests.h"

Test(ft_split_str, basic_test)
{
	char	*str = "AB1ABAB2AB3AB";
	char	*sep = "AB";
	char	**split_str = ft_split_str(str, sep);

	cr_assert_str_eq(split_str[0], "");
	cr_assert_str_eq(split_str[1], "1");
	cr_assert_str_eq(split_str[2], "");
	cr_assert_str_eq(split_str[3], "");
	cr_assert_str_eq(split_str[4], "2");
	cr_assert_str_eq(split_str[5], "");
	cr_assert_str_eq(split_str[6], "3");
	cr_assert_str_eq(split_str[7], "");
	cr_assert_null(split_str[8]);

	ft_free_split(&split_str);
}
