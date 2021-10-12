#include "libft.h"
#include "tests.h"


#define TEST(f) test(#f, f)


static void	test(const char *function_name, void function(void))
{
	printf("Testing '%s'...\n", function_name);
	function();
}

static void	test_is(void)
{
	TEST(test_ft_isalpha);
	TEST(test_ft_isdigit);
	TEST(test_ft_isalnum);
	TEST(test_ft_isascii);
	TEST(test_ft_isprint);
}

int	main(void)
{
	printf("Starting tests...\n");
	test_is();
	TEST(test_ft_strlen);
	TEST(test_ft_memset);
	TEST(test_ft_memcpy);
	// TEST(test_ft_bzero); // TODO: This test doesn't work.
	TEST(test_ft_strlcpy);
	TEST(test_ft_strlcat);
	printf("All tests passed!\n");
	return (0);
}
