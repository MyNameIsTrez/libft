#include "../libft.h"
#include "../tests.h"

#include <stdlib.h>

static char	*ft_stralloc(const size_t len)
{
	return (ft_calloc(len + 1, sizeof(char)));
}

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
