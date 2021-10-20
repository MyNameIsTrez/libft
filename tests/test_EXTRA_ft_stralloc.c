#include "../libft.h"
#include "../tests.h"

#include <stdlib.h>

static char	*ft_stralloc(size_t n)
{
	char	*str;

	str = malloc(n + 1);
	if (str)
		str[n] = '\0';
	return (str);
}

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

void	test_EXTRA_ft_stralloc(void)
{
	char	*str;

	str = ft_stralloc(5);
	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	assert(ft_strcmp(str, "hello") == 0);
	assert(str[5] == '\0');
}
