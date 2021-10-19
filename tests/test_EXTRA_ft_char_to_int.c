#include "../libft.h"
#include "../tests.h"

static int	ft_char_to_int(const char c)
{
	if ('0' <= c && c <= '9')
	{
		return (c - '0');
	}
	return (-1);
}

void	test_EXTRA_ft_char_to_int(void)
{
	int	i = 0;

	while (i <= 9)
	{
		printf("%d\n", ft_char_to_int('0' + i));
		i++;
	}
}
