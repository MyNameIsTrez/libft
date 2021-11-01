#include "../libft.h"
#include "../tests.h"

static void	ft_print_result(int n)
{
	char	c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write(2, &c, 1);
}

void	test_ft_strlcpy(void)
{
	char	dst[15];
	memset(dst, 0, 15);
	memset(dst, 'r', 6);
	char	src[] = "lorem ipsum dolor sit amet";
	size_t	dst_size = 0;

	ft_print_result(ft_strlcpy(dst, src, dst_size));

	write(2, "\n", 1);
	write(2, dst, 15);
}
