#include "../libft.h"
#include "../tests.h"

void	test_ft_memset(void)
{
	char	str[4];

	str[0] = 'f';
	str[1] = 'o';
	str[2] = 'o';
	str[3] = '\0';
	assert(ft_memset(str, 'c', 2) == memset(str, 'c', 2));
}
