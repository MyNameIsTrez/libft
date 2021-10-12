#include "../libft.h"
#include "../tests.h"

void	test_ft_strlcpy(void)
{
	char	dst[15];
	memset(dst, 0, 15);
	memset(dst, 'r', 6);
	char	src[] = "lorem ipsum dolor sit amet";
	size_t	dstsize = 15;

	// printf("size: %zu\nsrc: %s\ndst: %s\n", ft_strlcpy(dst, src, dstsize), src, dst);
}
