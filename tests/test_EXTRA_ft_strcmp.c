#include "../libft.h"
#include "../tests.h"

static int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

static int	ft_strcmp(const char *s1, const char *s2)
{
	return (ft_strncmp(s1, s2, ft_max(ft_strlen(s1), ft_strlen(s2))));
}

void	test_EXTRA_ft_strcmp(void)
{
	printf("%d %d\n", ft_strcmp("atoms\0", "atomsa"), strcmp("atoms\0", "atomsa"));
	printf("%d %d\n", ft_strcmp("atomsa", "atoms\0"), strcmp("atomsa", "atoms\0"));
	printf("%d %d\n", ft_strcmp("atoms\0", "atomsa"), strcmp("atoms\0", "atomsa"));
	printf("%d %d\n", ft_strcmp("atoms\0", "atomsaa"), strcmp("atoms\0", "atomsaa"));
	printf("%d %d\n", ft_strcmp("", "AAAAAA"), strcmp("", "AAAAAA"));
	printf("%d %d\n", ft_strcmp("atoms\0\0\0\0", "atoms\0abc"), strcmp("atoms\0\0\0\0", "atoms\0abc"));
	printf("%d %d\n", ft_strcmp("", "469"), strcmp("", "469"));
}
