#include "../libft.h"
#include "../tests.h"

#include <stdlib.h>

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
