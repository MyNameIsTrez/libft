#include "tests.h"

Test(ft_strstr)
{
	printf("'%s'\n", ft_strstr("foobar", ""));
	printf("'%s'\n", ft_strstr("foobar", "b"));
	printf("'%s'\n", strstr("foobar", "b"));
	printf("'%s'\n", ft_strstr("foobar", "ob"));
	printf("'%s'\n", ft_strstr("foobar", "baro"));
	printf("'%s'\n", ft_strstr("lorem ipsum dolor sit amet", "ipsumm"));
	printf("'%s'\n", strstr("lorem ipsum dolor sit amet", "ipsumm"));

	// The ft_strstr correctly crashes just like the original strstr here.
	// const char	haystack[] = { 'l', 'o', 'r', 'e', 'm', 'i', 'p', 's', 'u', 'm' };
	// printf("'%s'\n", ft_strstr(haystack, "ipsumm"));
	// printf("'%s'\n", strstr(haystack, "ipsumm"));
}
