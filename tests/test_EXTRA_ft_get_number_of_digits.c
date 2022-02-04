#include "tests.h"

void	test_ft_get_digit_count(void)
{
	// printf("number_len: %lu\n", ft_get_digit_count(123));
	assert(ft_get_digit_count(2) == 1);
	assert(ft_get_digit_count(-2) == 2);
	assert(ft_get_digit_count(0) == 1);
	assert(ft_get_digit_count(123) == 3);
}
