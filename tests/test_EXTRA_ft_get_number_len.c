#include "../libft.h"
#include "../tests.h"

void	test_EXTRA_ft_get_number_len(void)
{
	// printf("number_len: %lu\n", ft_get_number_len(123));
	assert(ft_get_number_len(2) == 1);
	assert(ft_get_number_len(-2) == 2);
	assert(ft_get_number_len(0) == 1);
	assert(ft_get_number_len(123) == 3);
}
