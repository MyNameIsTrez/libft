#include "../libft.h"
#include "../tests.h"

void	test_EXTRA_ft_strnlen(void)
{
	printf("%d\n", ft_strnlen("foo", 2));
	printf("%d\n", ft_strnlen("foo", 3));
	printf("%d\n", ft_strnlen("foo", 4));
}
