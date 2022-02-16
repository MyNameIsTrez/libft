#include "tests.h"

Test(ft_str_not_chr)
{
	printf("'%s'\n", ft_str_not_chr("bonjour", '\0'));
	printf("'%s'\n", ft_str_not_chr("bonjour", 'j'));
	printf("'%s'\n", ft_str_not_chr("   bonjour", ' '));
	printf("'%s'\n", ft_str_not_chr("   bonjour", 'o'));
}
