#include "tests.h"

Test(ft_strncmp)
{
	ASSERT(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0), 0);
	ASSERT(ft_strncmp("abcdefgh", "", 0), 0);

	ASSERT(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0), 0);
	ASSERT(ft_strncmp("abcdefgh", "", 0), 0);

	ASSERT(ft_strncmp("atoms\0", "atomsa", 5), 0);
	ASSERT(ft_strncmp("atoms\0", "atomsa", 5), 0);
	ASSERT(ft_strncmp("atoms\0", "atomsa", 6), '\0' - 'a');
	ASSERT(ft_strncmp("atoms\0", "atomsaa", 7), '\0' - 'a');
	ASSERT(ft_strncmp("", "AAAAAA", 6), '\0' - 'A');
	ASSERT(ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 8), 0);
	ASSERT(ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 80), 0);
}
