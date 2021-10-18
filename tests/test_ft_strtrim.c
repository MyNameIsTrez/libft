#include "../libft.h"
#include "../tests.h"

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(2, s, len);
}

void	test_ft_strtrim(void)
{
	ft_print_result(ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));
}
