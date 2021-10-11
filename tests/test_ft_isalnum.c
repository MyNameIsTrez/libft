#include "../libft.h"
#include "../tests.h"

void	test_ft_isalnum(void)
{
	int	c;

	printf("Testing ft_isalnum...\n");
	c = 0;
	while (c <= 255)
	{
		assert(ft_isalnum(c) == isalnum(c));
		c++;
	}
}
