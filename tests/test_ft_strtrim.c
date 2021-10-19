#include "../libft.h"
#include "../tests.h"

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(2, "<", 1);
	write(2, s, len);
	write(2, ">\n", 2);
}

void	test_ft_strtrim(void)
{
	// ft_print_result(ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));
	printf("'%s'\n", ft_strtrim(" a", " \t\n\v\f\r"));
	// ft_print_result(ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"));
}
