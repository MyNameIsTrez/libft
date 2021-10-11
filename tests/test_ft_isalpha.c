#include "../libft.h"
#include "../tests.h"

void	test_ft_isalpha(void)
{
	int	c;

	printf("Testing ft_isalpha...\n");
	c = 0;
	while (c <= 255)
	{
		assert(ft_isalpha(c) == isalpha(c));
		c++;
	}
}
