#include "tests.h"

Test(ft_atoi, sign_before_space)
{
	cr_expect_eq(ft_atoi(" 12345 "), atoi(" 12345 "));
	cr_expect_eq(ft_atoi("- 12345"), atoi("- 12345"));
	cr_expect_eq(ft_atoi("+ 12345"), atoi("+ 12345"));
}
