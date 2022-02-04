#include "tests.h"

// static void	ft_print_result(char const *s)
// {
// 	size_t	len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(2, s, len);
// }

Test(ft_split, basic_test)
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
	// ft_free_split(&split);

	// char	**split = ft_split("      split       this for   me  !       ", ' ');
	// printf("'%s'\n", split[0]);
	// printf("'%s'\n", split[1]);
	// printf("'%s'\n", split[2]);
	// printf("'%s'\n", split[3]);
	// printf("'%s'\n", split[4]);
	// printf("'%s'\n", split[5]);

	// str = "", sep = "x" -> 0
	// str = "f", sep = "x" -> 1
	// str = "foo", sep = "x" -> 1
	// str = "xfoo", sep = "x" -> 1
	// str = "foox", sep = "x" -> 1
	// str = "xfoox", sep = "x" -> 1
	// str = "xxfooxx", sep = "x" -> 1
	// str = "fooxfoox", sep = "x" -> 2
	// str = "xfooxfoo", sep = "x" -> 2

	// int		i = 0;
	// while (split[i] != NULL)
	// {
	// 	ft_print_result(split[i]);
	// 	write(2, "\n", 1);
	// 	i++;
	// }


	char	**split = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');

	cr_expect_str_eq(split[0], "lorem");
	cr_expect_str_eq(split[1], "ipsum");
	cr_expect_str_eq(split[2], "dolor");
	cr_expect_str_eq(split[3], "sit");
	cr_expect_str_eq(split[4], "amet,");
	cr_expect_str_eq(split[5], "consectetur");
	cr_expect_str_eq(split[6], "adipiscing");
	cr_expect_str_eq(split[7], "elit.");
	cr_expect_str_eq(split[8], "Sed");
	cr_expect_str_eq(split[9], "non");
	cr_expect_str_eq(split[10], "risus.");
	cr_expect_str_eq(split[11], "Suspendisse");

	// TODO: Try to make this work:
	// const char	*expected[] = {
	// 	"lorem",
	// 	"ipsum",
	// 	"dolor",
	// 	"sit",
	// 	"amet",
	// 	"consectetur",
	// 	"adipiscing",
	// 	"elit.",
	// 	"Sed",
	// 	"non",
	// 	"risus.",
	// 	"Suspendisse"
	// };

	// cr_assert_arr_eq(
	// 	ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' '),
	// 	expected,
	// 	69
	// );

	ft_free_split(&split);


	char	**split2 = ft_split("", ' ');

	cr_expect_eq(split2[0], NULL);

	ft_free_split(&split2);
}
