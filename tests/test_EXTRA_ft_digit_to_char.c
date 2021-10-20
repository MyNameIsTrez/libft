#include "../libft.h"
#include "../tests.h"

static char	ft_digit_to_char(const int n)
{
	if (0 <= n && n <= 9)
	{
		return (n + '0');
	}
	return ('\0');
}

void	test_EXTRA_ft_digit_to_char(void)
{
	int	i = 0;

	while (i <= 9)
	{
		assert(ft_digit_to_char(i) == i + '0');
		i++;
	}

	assert(ft_digit_to_char(-1) == '\0');
	assert(ft_digit_to_char(10) == '\0');
}
