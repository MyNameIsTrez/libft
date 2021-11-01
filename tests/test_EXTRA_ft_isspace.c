#include "../libft.h"
#include "../tests.h"

static int	ft_isspace(const int chr)
{
	if (chr == '\t' || chr == '\n' || chr == '\v'
		|| chr == '\f' || chr == '\r' || chr == ' ')
		return (1);
	return (0);
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
