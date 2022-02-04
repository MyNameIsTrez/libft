#include "../tests.h"

void	test_ft_char_to_str(void)
{
	// char	*str = ft_char_to_str('c');
	// printf("'%s'\n", str);
	assert(strcmp(ft_char_to_str('c'), "c") == 0);
	assert(strcmp(ft_char_to_str('\0'), "") == 0);
	// assert(ft_char_to_digit(10 + '0') == -1);
}
