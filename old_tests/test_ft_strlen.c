#include "tests.h"

void	test_ft_strlen(void)
{
	assert(ft_strlen("") == strlen(""));
	assert(ft_strlen("f") == strlen("f"));
	assert(ft_strlen("fo") == strlen("fo"));
	assert(ft_strlen("foo") == strlen("foo"));
}
