#include "../libft.h"
#include "../tests.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && len < maxlen)
	{
		len++;
	}
	return (len);
}

void	test_EXTRA_ft_strnlen(void)
{
	printf("%zu\n", ft_strnlen("foo", 2));
	printf("%zu\n", ft_strnlen("foo", 3));
	printf("%zu\n", ft_strnlen("foo", 4));
}
