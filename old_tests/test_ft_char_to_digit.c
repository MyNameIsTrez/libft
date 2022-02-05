#include "tests.h"

void	test_ft_char_to_digit(void)
{
	int	i = 0;

	while (i <= 9)
	{
		assert(ft_char_to_digit((char)(i + '0')) == i);
		i++;
	}

	assert(ft_char_to_digit(-1 + '0') == -1);
	assert(ft_char_to_digit(10 + '0') == -1);
}
