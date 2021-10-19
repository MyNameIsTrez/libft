#include "../libft.h"
#include "../tests.h"

static char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t			first_index;
	size_t			offset;

	if (needle[0] == '\0')
		return ((char *)haystack);
	first_index = 0;
	offset = 0;
	while (haystack[first_index + offset] != '\0')
	{
		if (haystack[first_index + offset] == needle[offset])
		{
			offset++;
			if (needle[offset] == '\0')
				return ((char *)haystack + first_index);
		}
		else
		{
			first_index++;
			offset = 0;
		}
	}
	return (NULL);
}

void	test_EXTRA_ft_strstr(void)
{
	printf("%s\n", ft_strstr("foobar", ""));
	printf("%s\n", ft_strstr("foobar", "b"));
	printf("%s\n", strstr("foobar", "b"));
	printf("%s\n", ft_strstr("foobar", "ob"));
	printf("%s\n", ft_strstr("foobar", "baro"));
	printf("%s\n", ft_strstr("lorem ipsum dolor sit amet", "ipsumm"));
	printf("%s\n", strstr("lorem ipsum dolor sit amet", "ipsumm"));

	// The ft_strstr correctly crashes just like the original strstr here.
	// const char	haystack[] = { 'l', 'o', 'r', 'e', 'm', 'i', 'p', 's', 'u', 'm' };
	// printf("%s\n", ft_strstr(haystack, "ipsumm"));
	// printf("%s\n", strstr(haystack, "ipsumm"));
}
