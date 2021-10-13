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

void	test_ft_strlcat(void)
{
	char	dst[15];
	memset(dst, 0, 15);
	memset(dst, 'r', 6);

	dst[11] = 'a';
	// memset(dst, 'r', 15);

	// ft_print_result(ft_strlcat(dst, "lorem ipsum dolor sit amet", 1));
	ft_print_result(ft_strlcat(dst, "lorem", 15));

	write(2, "\n", 1);
	write(2, dst, 15);
	// printf("bar1\n");
}
