#include "tests.h"

void	test_EXTRA_ft_min(void)
{
	assert(ft_min(1, 2) == 1);
	assert(ft_min(2, 2) == 2);
	assert(ft_min(3, 2) == 2);
	assert(ft_min(-1, -2) == -2);
	assert(ft_min(-2, -2) == -2);
	assert(ft_min(-3, -2) == -3);
	assert(ft_min(0, -1) == -1);
	assert(ft_min(0, 0) == 0);
}
