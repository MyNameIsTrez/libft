#include "tests.h"

void	test_EXTRA_ft_str_replace(void)
{
	char	str[] = "foo\nbar";
	printf("'%s'\n", ft_str_replace(str, "\n", "\\n"));
}
