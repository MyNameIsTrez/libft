#include "tests.h"

Test(ft_str_not_str)
{
	printf("'%s'\n", ft_str_not_str("", ""));
	assert(strcmp(ft_str_not_str("", ""), "") == 0);
	assert(strcmp(ft_str_not_str("aba", "a"), "ba") == 0);
	assert(strcmp(ft_str_not_str("aba", "ab"), "a") == 0);
}
