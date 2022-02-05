#include "tests.h"

void	test_ft_putstr_fd(void)
{
	char	s[] = "foo";

	printf("%lu\n", ft_strlen(s));
	ft_putstr_fd(s, 1);
}
