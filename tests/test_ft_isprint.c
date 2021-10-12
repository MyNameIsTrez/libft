#include "../libft.h"
#include "../tests.h"

void	test_ft_isprint(void)
{
	int	c;

	c = 0;
	while (c <= 255)
	{
		assert(ft_isprint(c) == isprint(c));
		c++;
	}
}
