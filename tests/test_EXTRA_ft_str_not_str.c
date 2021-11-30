#include "tests.h"

void	test_EXTRA_ft_str_not_str(void)
{
	printf("'%s'\n", ft_str_not_str("", ""));
	assert(strcmp(ft_str_not_str("", ""), "") == 0);
	assert(strcmp(ft_str_not_str("aba", "a"), "ba") == 0);
	assert(strcmp(ft_str_not_str("aba", "ab"), "a") == 0);
}
