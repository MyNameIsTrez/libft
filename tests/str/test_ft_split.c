/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_split.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 15:49:24 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/17 15:50:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_split)
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

	ASSERT(split[0], "lorem");
	ASSERT(split[1], "ipsum");
	ASSERT(split[2], "dolor");
	ASSERT(split[3], "sit");
	ASSERT(split[4], "amet,");
	ASSERT(split[5], "consectetur");
	ASSERT(split[6], "adipiscing");
	ASSERT(split[7], "elit.");
	ASSERT(split[8], "Sed");
	ASSERT(split[9], "non");
	ASSERT(split[10], "risus.");
	ASSERT(split[11], "Suspendisse");

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

	ASSERT((void *)split2[0], NULL);

	ft_free_split(&split2);
}

////////////////////////////////////////////////////////////////////////////////
