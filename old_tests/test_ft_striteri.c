#include "tests.h"

static void	example_function_1(unsigned int i, char *c)
{
	printf("char before change: %c\n", *c);
	(*c) += i;
	printf("char after change: %c\n\n", *c);
}

void	test_ft_striteri(void)
{
	char	s[] = "foo";

	ft_striteri(s, example_function_1);
	printf("'%s'\n", s);
}
