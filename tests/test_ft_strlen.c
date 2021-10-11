#include "../libft.h"
#include "../tests.h"

void	test_ft_strlen(void)
{
	printf("Testing ft_strlen...\n");
	assert(ft_strlen("") == strlen(""));
	assert(ft_strlen("f") == strlen("f"));
	assert(ft_strlen("fo") == strlen("fo"));
	assert(ft_strlen("foo") == strlen("foo"));
}
