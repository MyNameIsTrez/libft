#include "../libft.h"
#include "../tests.h"

// TODO: Origineel was het void (*f), dus is dit dan goed?
static char	example_function_1(unsigned int index, char c)
{
	printf("char before change: %c\n", c);
	c += index;
	printf("char after change: %c\n\n", c);
	return (c);
}

void	test_ft_strmapi(void)
{
	printf("s: %s\n", ft_strmapi("foo", example_function_1));
}
