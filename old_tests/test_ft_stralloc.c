#include "tests.h"

Test(ft_stralloc)
{
	char	*str;

	str = ft_stralloc(5);
	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	assert(ft_str_eq(str, "hello"));
	assert(str[5] == '\0');
}
