#include "tests.h"

void	test_EXTRA_ft_max(void)
{
	assert(ft_max(1, 2) == 2);
	assert(ft_max(2, 2) == 2);
	assert(ft_max(3, 2) == 3);
	assert(ft_max(-1, -2) == -1);
	assert(ft_max(-2, -2) == -2);
	assert(ft_max(-3, -2) == -2);
	assert(ft_max(0, -1) == 0);
	assert(ft_max(0, 0) == 0);
}
