#include "tests.h"

void	test_ft_isprint(void)
{
	int	chr;

	chr = 0;
	while (chr <= 255)
	{
		assert(ft_isprint(chr) == isprint(chr));
		chr++;
	}
}
