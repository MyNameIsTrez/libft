#include "../libft.h"
#include "../tests.h"

void	test_ft_split(void)
{
	// char	**result = ft_split("  foo  ", ' ');
	// printf("'%s'\n", result[0]);
	// printf("'%s'\n", result[1]);

	// char	**result = ft_split(" foo barb ", ' ');
	// printf("'%s'\n", result[0]);
	// printf("'%s'\n", result[1]);
	// printf("'%s'\n", result[2]);

	char	**result = ft_split("  foo  barb  ", ' ');
	printf("%p\n", result);
	// printf("'%s'\n", result[0]);
	// printf("'%s'\n", result[1]);
	// printf("'%s'\n", result[2]);

	// char	**result = ft_split("      split       this for   me  !       ", ' ');
	// printf("'%s'\n", result[0]);
	// printf("'%s'\n", result[1]);
	// printf("'%s'\n", result[2]);
	// printf("'%s'\n", result[3]);
	// printf("'%s'\n", result[4]);
	// printf("'%s'\n", result[5]);
}
