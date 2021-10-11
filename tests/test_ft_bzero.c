#include "../libft.h"
#include "../tests.h"

// bzero(str, 2));
void	test_ft_bzero(void)
{
	char	str_ft[4];

	str_ft[0] = 'f';
	str_ft[1] = 'o';
	str_ft[2] = 'o';
	str_ft[3] = '\0';
	printf("Testing ft_bzero...\n");
	ft_bzero(str_ft, 2);
	printf("a%sb", str_ft);
}
