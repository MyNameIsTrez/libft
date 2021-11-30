#include "tests.h"

void	test_EXTRA_ft_str_not_chr(void)
{
	printf("'%s'\n", ft_str_not_chr("bonjour", '\0'));
	printf("'%s'\n", ft_str_not_chr("bonjour", 'j'));
	printf("'%s'\n", ft_str_not_chr("   bonjour", ' '));
	printf("'%s'\n", ft_str_not_chr("   bonjour", 'o'));
}
