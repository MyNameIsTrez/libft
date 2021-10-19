#include "../libft.h"
#include "../tests.h"

static char	*ft_strtrim_whitespace(char const *string)
{
	return (ft_strtrim(string, " \t\n\v\f\r"));
}

static int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*src1;
	unsigned char	*src2;
	size_t			i;
	int				diff;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	i = 0;
	while (src1[i] != '\0' && src2[i] != '\0')
	{
		diff = src1[i] - src2[i];
		if (diff != 0)
		{
			return (diff);
		}
		i++;
	}
	return (0);
}

void	test_EXTRA_ft_strtrim_whitespace(void)
{
	printf("'%s'\n", ft_strtrim_whitespace(" a"));
	printf("'%s'\n", ft_strtrim_whitespace(" \n\t foo bar \n\t "));
	printf("'%s'\n", ft_strtrim_whitespace("\t\n\r\v\f  469 \n"));
	printf("%d\n", ft_strcmp(ft_strtrim_whitespace("\t\n\r\v\f  469 \n"), "469"));
	assert(ft_strcmp(ft_strtrim_whitespace(" \n\t foo bar \n\t "), "foo bar") == 0);
	assert(ft_strcmp(ft_strtrim_whitespace("\t\n\r\v\f  469 \n"), "469") == 0);
	printf("'%s'\n", ft_strtrim("\t\n\r\v\f  469 \n", " \t\n\v\f\r"));
	printf("'%s'\n", ft_strtrim_whitespace("\t\n\r\v\f  469 \n"));
}
