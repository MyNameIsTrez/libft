#include "tests.h"

Test(ft_get_digit_count)
{
	// printf("number_len: %lu\n", ft_get_digit_count(123));
	assert(ft_get_digit_count(2) == 1);
	assert(ft_get_digit_count(-2) == 2);
	assert(ft_get_digit_count(0) == 1);
	assert(ft_get_digit_count(123) == 3);
}
