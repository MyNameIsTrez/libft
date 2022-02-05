#include "tests.h"

void	test_ft_bzero(void)
{
	char	str[4];

	str[0] = 'f';
	str[1] = 'o';
	str[2] = 'o';
	str[3] = '\0';
	ft_bzero(str, 2);
	// printf("'%s'", str);
}
