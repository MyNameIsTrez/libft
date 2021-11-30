#include "tests.h"

void	test_EXTRA_ft_strnlen(void)
{
	printf("%lu\n", ft_strnlen("foo", 2));
	printf("%lu\n", ft_strnlen("foo", 3));
	printf("%lu\n", ft_strnlen("foo", 4));
}
