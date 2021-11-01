#include "../libft.h"
#include "../tests.h"

static size_t	ft_strnlen(const char *s, const size_t max_len)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && len < max_len)
	{
		len++;
	}
	return (len);
}

void	test_EXTRA_ft_strnlen(void)
{
	printf("%lu\n", ft_strnlen("foo", 2));
	printf("%lu\n", ft_strnlen("foo", 3));
	printf("%lu\n", ft_strnlen("foo", 4));
}
