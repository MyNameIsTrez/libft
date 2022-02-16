#include "tests.h"

Test(ft_strnlen)
{
	printf("%lu\n", ft_strnlen("foo", 2));
	printf("%lu\n", ft_strnlen("foo", 3));
	printf("%lu\n", ft_strnlen("foo", 4));
}
