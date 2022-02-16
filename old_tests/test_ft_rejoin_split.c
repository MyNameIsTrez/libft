#include "tests.h"

Test(ft_rejoin_split)
{
	char	*str = "AB1ABAB2AB3AB";
	char	*sep = "AB";

	char	**split = ft_split_str(str, sep);
	ASSERT(ft_rejoin_split(split, "C"), "C1CC2C3C");
}
