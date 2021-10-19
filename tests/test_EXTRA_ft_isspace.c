#include "../libft.h"
#include "../tests.h"

static int	ft_isspace(int c)
{
	return (ft_strchr(" \t\n\v\f\r", c) != NULL);
}

void	test_EXTRA_ft_isspace(void)
{
	assert(ft_isspace(' ') == 1);
	assert(ft_isspace('\t') == 1);
	assert(ft_isspace('\n') == 1);
	assert(ft_isspace('\v') == 1);
	assert(ft_isspace('\f') == 1);
	assert(ft_isspace('\r') == 1);
	assert(ft_isspace('c') == 0);
}
