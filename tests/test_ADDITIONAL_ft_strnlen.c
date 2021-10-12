#include "../libft.h"
#include "../tests.h"

void	test_ADDITIONAL_ft_strnlen(void)
{
	char	*buffer = "foo";

	printf("%i\n", ft_strnlen(buffer, 2));
}
