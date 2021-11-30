#include "tests.h"

void	test_EXTRA_ft_rejoin_split(void)
{
	char	*str = "foo1ABABfoo2ABfoo3";
	char	*sep = "AB";

	char	**split = ft_split_str(str, sep);
	printf("%s\n", ft_rejoin_split(split, "CDE"));
}
