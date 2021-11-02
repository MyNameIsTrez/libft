#include "../libft.h"
#include "../tests.h"

void	test_ft_atoi(void)
{
	// char	str[] = "4";
	// printf("%d\n", ft_atoi(str));
	// printf("%d\n", ft_atoi(""));
	// printf("%d\n", ft_atoi("4"));
	// printf("%d\n", ft_atoi("42"));
	// printf("%d\n", ft_atoi("-42"));
	// printf("%d\n", ft_atoi("546:5"));
	// printf("%d\n", ft_atoi("\t\n\r\v\f  469 \n"));
	printf("%d\n", ft_atoi("\t\n\r\v\f  -922337203685477580800005400 \n"));
	printf("%d\n", atoi("\t\n\r\v\f  -922337203685477580800005400 \n"));
	// INT64_MAX
}
