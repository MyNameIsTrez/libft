#include "../libft.h"
#include "../tests.h"

void	test_ft_isdigit(void)
{
	int	c;

	c = 0;
	while (c <= 255)
	{
		assert(ft_isdigit(c) == isdigit(c));
		c++;
	}
}
