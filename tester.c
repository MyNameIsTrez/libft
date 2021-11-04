#include "libft.h"
#include "tests.h"

#include <stdlib.h>


#define TEST(fun) test(#fun, fun)


static void	test(const char *function_name, void function(void))
{
	printf("Testing '%s'...\n", function_name);
	function();
}


int	main(void)
{
	printf("Starting tests...\n");

	// TEST(test_EXTRA_ft_char_to_digit);
	// TEST(test_EXTRA_ft_digit_to_char);
	// TEST(test_EXTRA_ft_free);
	// TEST(test_EXTRA_ft_get_number_of_digits);
	// TEST(test_EXTRA_ft_isspace);
	// TEST(test_EXTRA_ft_max);
	// TEST(test_EXTRA_ft_min);
	// TEST(test_EXTRA_ft_str_not_chr);
	// TEST(test_EXTRA_ft_stralloc);
	// TEST(test_EXTRA_ft_strcmp);
	// TEST(test_EXTRA_ft_strnlen);
	// TEST(test_EXTRA_ft_strstr);
	// TEST(test_EXTRA_ft_strtrim_whitespace);
	// TEST(test_ft_atoi);
	// TEST(test_ft_bzero);
	// TEST(test_ft_calloc);
	// TEST(test_ft_isalnum);
	// TEST(test_ft_isalpha);
	// TEST(test_ft_isascii);
	// TEST(test_ft_isdigit);
	// TEST(test_ft_isprint);
	// TEST(test_ft_itoa);
	// TEST(test_ft_lstadd_back);
	// TEST(test_ft_lstadd_front);
	// TEST(test_ft_lstclear);
	// TEST(test_ft_lstdelone);
	// TEST(test_ft_lstiter);
	// TEST(test_ft_lstlast);
	// TEST(test_ft_lstmap);
	// TEST(test_ft_lstnew);
	// TEST(test_ft_lstsize);
	// TEST(test_ft_memchr);
	// TEST(test_ft_memcmp);
	// TEST(test_ft_memcpy);
	// TEST(test_ft_memmove);
	// TEST(test_ft_memset);
	// TEST(test_ft_putchar_fd);
	// TEST(test_ft_putendl_fd);
	// TEST(test_ft_putnbr_fd);
	// TEST(test_ft_putstr_fd);
	// TEST(test_ft_split);
	// TEST(test_ft_strchr);
	// TEST(test_ft_strdup);
	// TEST(test_ft_striteri);
	// TEST(test_ft_strjoin);
	// TEST(test_ft_strlcat);
	// TEST(test_ft_strlcpy);
	// TEST(test_ft_strlen);
	// TEST(test_ft_strmapi);
	// TEST(test_ft_strncmp);
	// TEST(test_ft_strnstr);
	// TEST(test_ft_strrchr);
	// TEST(test_ft_strtrim);
	// TEST(test_ft_substr);
	// TEST(test_ft_tolower);
	// TEST(test_ft_toupper);

	// system("leaks --quiet tester");

	printf("All tests passed!\n");
	return (0);
}
