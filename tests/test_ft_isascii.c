#include "../libft.h"
#include "../tests.h"

void	test_ft_isascii(void)
{
	int	c;

	c = 0;
	while (c <= 255)
	{
		assert(ft_isascii(c) == isascii(c));
		c++;
	}
}
