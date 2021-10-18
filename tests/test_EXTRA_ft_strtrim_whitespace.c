#include "../libft.h"
#include "../tests.h"

void	test_EXTRA_ft_strtrim_whitespace(void)
{
	// printf("'%s'\n", ft_strtrim_whitespace(" \n\t foo bar \n\t "));
	assert(ft_strcmp(ft_strtrim_whitespace(" \n\t foo bar \n\t "), "foo bar") == 0);
}
