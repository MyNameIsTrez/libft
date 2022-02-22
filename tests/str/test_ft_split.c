/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_split.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 15:49:24 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
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

	massert(split[0], "lorem");
	massert(split[1], "ipsum");
	massert(split[2], "dolor");
	massert(split[3], "sit");
	massert(split[4], "amet,");
	massert(split[5], "consectetur");
	massert(split[6], "adipiscing");
	massert(split[7], "elit.");
	massert(split[8], "Sed");
	massert(split[9], "non");
	massert(split[10], "risus.");
	massert(split[11], "Suspendisse");

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

	massert((void *)split2[0], NULL);

	ft_free_split(&split2);
}

////////////////////////////////////////////////////////////////////////////////
