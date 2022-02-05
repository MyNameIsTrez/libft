#include "tests.h"

Test(test_ft_strlcpy, basic_test)
{
	char	dst1[15];
	memset(dst1, 0, 15);
	memset(dst1, 'r', 6);
	char	src1[] = "lorem ipsum dolor sit amet";
	size_t ret = ft_strlcpy(dst1, src1, 0);
	cr_assert_eq(ret, 26);
	cr_assert_str_escaped_eq(dst1, "rrrrrr");
}
