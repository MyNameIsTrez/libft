#include "../libft.h"
#include "../tests.h"

// TODO: Origineel was het void (*f), dus is dit dan goed?
static void	example_function_1(unsigned int index, char *c)
{
	printf("char before change: %c\n", *c);
	(*c) += index;
	printf("char after change: %c\n\n", *c);
}

void	test_ft_striteri(void)
{
	char	s[] = "foo";

	ft_striteri(s, example_function_1);
	printf("s: %s\n", s);
}
