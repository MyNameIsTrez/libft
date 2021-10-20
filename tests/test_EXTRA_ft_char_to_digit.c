#include "../libft.h"
#include "../tests.h"

static int	ft_char_to_digit(const char c)
{
	if ('0' <= c && c <= '9')
	{
		return (c - '0');
	}
	return (-1);
}

void	test_EXTRA_ft_char_to_digit(void)
{
	int	i = 0;

	while (i <= 9)
	{
		assert(ft_char_to_digit(i + '0') == i);
		i++;
	}

	assert(ft_char_to_digit(-1 + '0') == -1);
	assert(ft_char_to_digit(10 + '0') == -1);
}
