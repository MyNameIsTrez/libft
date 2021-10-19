#include "../libft.h"
#include "../tests.h"

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

void	test_EXTRA_ft_strcmp(void)
{
	printf("%d\n", ft_strcmp("atoms\0\0\0\0", "atoms\0abc")); // == 0 strcmp stops at null terminator
	printf("%d\n", ft_strcmp("atoms\0\0\0\0", "atomsaaa"));   // != 0 Strings are different
	// TODO: Add extra tests!
	//       I have no clue if it handles one string ending with a null character while the other goes on correctly.
}
