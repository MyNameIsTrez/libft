#include "../libft.h"
#include "../tests.h"

static char	example_function_1(unsigned int i, char c)
{
	printf("char before change: %c\n", c);
	c += i;
	printf("char after change: %c\n\n", c);
	return (c);
}

void	test_ft_strmapi(void)
{
	printf("s: %s\n", ft_strmapi("foo", example_function_1));
}
