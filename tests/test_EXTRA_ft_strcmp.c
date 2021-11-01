#include "../libft.h"
#include "../tests.h"

static int	ft_max(const int a, const int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

static int	ft_strcmp(const char *str1, const char *str2)
{
	return (ft_strncmp(str1, str2, ft_max(ft_strlen(str1), ft_strlen(str2))));
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
