#include "tests.h"

Test(ft_str_replace)
{
	char	str[] = "foo\nbar";
	printf("'%s'\n", ft_str_replace(str, "\n", "\\n"));
}
