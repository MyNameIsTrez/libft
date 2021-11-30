#include "tests.h"

void	test_EXTRA_ft_get_number_of_digits(void)
{
	// printf("number_len: %lu\n", ft_get_number_of_digits(123));
	assert(ft_get_number_of_digits(2) == 1);
	assert(ft_get_number_of_digits(-2) == 2);
	assert(ft_get_number_of_digits(0) == 1);
	assert(ft_get_number_of_digits(123) == 3);
}
