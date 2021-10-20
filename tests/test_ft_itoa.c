#include "../libft.h"
#include "../tests.h"
#include <stdio.h>
#include <stdlib.h>

void	test_ft_itoa(void)
{
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
}
