#include "tests.h"

void	test_EXTRA_ft_strtrim_whitespace(void)
{
	printf("'%s'\n", ft_strtrim_whitespace(" a"));
	printf("'%s'\n", ft_strtrim_whitespace(" \n\t foo bar \n\t "));
	printf("'%s'\n", ft_strtrim_whitespace("\t\n\r\v\f  469 \n"));
	printf("%d\n", ft_strcmp(ft_strtrim_whitespace("\t\n\r\v\f  469 \n"), "469"));
	assert(ft_strcmp(ft_strtrim_whitespace(" \n\t foo bar \n\t "), "foo bar") == 0);
	assert(ft_strcmp(ft_strtrim_whitespace("\t\n\r\v\f  469 \n"), "469") == 0);
	printf("'%s'\n", ft_strtrim("\t\n\r\v\f  469 \n", " \t\n\v\f\r"));
	printf("'%s'\n", ft_strtrim_whitespace("\t\n\r\v\f  469 \n"));
}
