#include "tests.h"

Test(ft_strncmp)
{
	massert(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0), 0);
	massert(ft_strncmp("abcdefgh", "", 0), 0);

	massert(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0), 0);
	massert(ft_strncmp("abcdefgh", "", 0), 0);

	massert(ft_strncmp("atoms\0", "atomsa", 5), 0);
	massert(ft_strncmp("atoms\0", "atomsa", 5), 0);
	massert(ft_strncmp("atoms\0", "atomsa", 6), '\0' - 'a');
	massert(ft_strncmp("atoms\0", "atomsaa", 7), '\0' - 'a');
	massert(ft_strncmp("", "AAAAAA", 6), '\0' - 'A');
	massert(ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 8), 0);
	massert(ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 80), 0);
}
