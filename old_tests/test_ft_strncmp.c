#include "tests.h"

Test(ft_strncmp, warmachine_9_10)
{
	// cr_assert_eq(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0), 0);
	// cr_assert_eq(ft_strncmp("abcdefgh", "", 0), 0);

	cr_assert_int_eq(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0), strncmp("zyxbcdefgh", "abcdwxyz", 0));
	// cr_assert_eq(ft_strncmp("abcdefgh", "", 0), strncmp("abcdefgh", "", 0));

	// cr_assert_eq(ft_strncmp("atoms\0", "atomsa", 5), strncmp("atoms\0", "atomsa", 5));
	// printf("%d %d\n", ft_strncmp("atoms\0", "atomsa", 5), strncmp("atoms\0", "atomsa", 5));
	// printf("%d %d\n", ft_strncmp("atoms\0", "atomsa", 6), strncmp("atoms\0", "atomsa", 6));
	// printf("%d %d\n", ft_strncmp("atoms\0", "atomsaa", 7), strncmp("atoms\0", "atomsaa", 7));
	// printf("%d %d\n", ft_strncmp("", "AAAAAA", 6), strncmp("", "AAAAAA", 6));
	// printf("%d %d\n", ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 8), strncmp("atoms\0\0\0\0", "atoms\0abc", 8));
	// printf("%d %d\n", ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 80), strncmp("atoms\0\0\0\0", "atoms\0abc", 80));
}
