#include "tests.h"

Test(ft_strcmp)
{
	printf("%d %d\n", ft_strcmp("atoms\0", "atomsa"), strcmp("atoms\0", "atomsa"));
	printf("%d %d\n", ft_strcmp("atomsa", "atoms\0"), strcmp("atomsa", "atoms\0"));
	printf("%d %d\n", ft_strcmp("atoms\0", "atomsa"), strcmp("atoms\0", "atomsa"));
	printf("%d %d\n", ft_strcmp("atoms\0", "atomsaa"), strcmp("atoms\0", "atomsaa"));
	printf("%d %d\n", ft_strcmp("", "AAAAAA"), strcmp("", "AAAAAA"));
	printf("%d %d\n", ft_strcmp("atoms\0\0\0\0", "atoms\0abc"), strcmp("atoms\0\0\0\0", "atoms\0abc"));
	printf("%d %d\n", ft_strcmp("", "469"), strcmp("", "469"));
}
