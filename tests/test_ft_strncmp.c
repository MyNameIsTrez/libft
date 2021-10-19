#include "../libft.h"
#include "../tests.h"

void	test_ft_strncmp(void)
{
	printf("%d %d\n", ft_strncmp("atoms\0", "atomsa", 5), strncmp("atoms\0", "atomsa", 5));
	printf("%d %d\n", ft_strncmp("atoms\0", "atomsa", 6), strncmp("atoms\0", "atomsa", 6));
	printf("%d %d\n", ft_strncmp("atoms\0", "atomsaa", 7), strncmp("atoms\0", "atomsaa", 7));
	printf("%d %d\n", ft_strncmp("", "AAAAAA", 6), strncmp("", "AAAAAA", 6));
	printf("%d %d\n", ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 8), strncmp("atoms\0\0\0\0", "atoms\0abc", 8));
	printf("%d %d\n", ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 80), strncmp("atoms\0\0\0\0", "atoms\0abc", 80));
}
