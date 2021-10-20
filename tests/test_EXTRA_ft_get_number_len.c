#include "../libft.h"
#include "../tests.h"

#include <stddef.h>

static size_t	ft_get_number_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0 || n == 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	test_EXTRA_ft_get_number_len(void)
{
	// printf("%lu\n", ft_get_number_len(2));
	assert(ft_get_number_len(2) == 1);
	assert(ft_get_number_len(-2) == 2);
	assert(ft_get_number_len(0) == 1);
}
