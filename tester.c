#include "libft.h"
#include "tests.h"

static void	test_is(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
}

int	main(void)
{
	printf("Starting tests...\n");
	test_is();
	test_ft_strlen();
	test_ft_memset();
	test_ft_memcpy();
	// test_ft_bzero(); // TODO: This test doesn't work.
	test_ft_strlcpy();
	printf("All tests passed!\n");
	return (0);
}
