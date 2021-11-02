#include "../libft.h"
#include "../tests.h"

static void	ft_print_result(char const *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	write(2, s, len);
}

// static void	free_split(char ***split)
// {
// 	size_t	i;

// 	i = 0;
// 	while ((*split)[i] != NULL)
// 	{
// 		free((*split)[i]);
// 		i++;
// 	}
// 	free(*split);
// 	*split = NULL;
// }

void	test_ft_split(void)
{
	// char	**split = ft_split("  foo  ", ' ');
	// printf("'%s'\n", split[0]);
	// printf("'%s'\n", split[1]);

	// char	**split = ft_split(" foo barb ", ' ');
	// printf("'%s'\n", split[0]);
	// printf("'%s'\n", split[1]);
	// printf("'%s'\n", split[2]);

	// char	**split = ft_split("  foo  barb  ", ' ');
	// printf("'%s'\n", split[0]);
	// printf("'%s'\n", split[1]);
	// printf("'%s'\n", split[2]);
	// // printf("%p\n", split);
	// free_split(&split);

	// char	**split = ft_split("      split       this for   me  !       ", ' ');
	// printf("'%s'\n", split[0]);
	// printf("'%s'\n", split[1]);
	// printf("'%s'\n", split[2]);
	// printf("'%s'\n", split[3]);
	// printf("'%s'\n", split[4]);
	// printf("'%s'\n", split[5]);

	char	**split = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');

	int		i = 0;
	while (split[i] != NULL)
	{
		ft_print_result(split[i]);
		write(2, "\n", 1);
		i++;
	}
}
