#include "libft.h"
#include "../tests.h"

void	test_ft_strnstr(void)
{
	printf("%s\n", ft_strnstr("bar", "bar", 3));
	printf("%s\n", strnstr("bar", "bar", 3));
	// printf("%s\n", ft_strnstr("foobar", "bar", 6));
	// printf("%s\n", strnstr("foobar", "bar", 6));
	// printf("%s\n", ft_strnstr("foobar", "", 6));
	// printf("%s\n", ft_strnstr("foobar", "b", 6));
	// printf("%s\n", strnstr("foobar", "b", 6));
	// printf("%s\n", ft_strnstr("foobar", "ob", 6));
	// printf("%s\n", ft_strnstr("foobar", "baro", 6));
	// printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	// printf("%s\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));

	// The ft_strnstr correctly crashes just like the original strnstr here.
	// const char	haystack[] = { 'l', 'o', 'r', 'e', 'm', 'i', 'p', 's', 'u', 'm' };
	// printf("%s\n", ft_strnstr(haystack, "ipsumm", 30));
	// printf("%s\n", strnstr(haystack, "ipsumm", 30));
}
