#include "../libft.h"
#include "../tests.h"

void	test_EXTRA_ft_strcmp(void)
{
	printf("%d\n", strcmp("atoms\0\0\0\0", "atoms\0abc")); // == 0 strcmp stops at null terminator
	printf("%d\n", strcmp("atoms\0\0\0\0", "atomsaaa"));   // != 0 Strings are different
	// TODO: Add extra tests!
	//       I have no clue if it handles one string ending with a null character while the other goes on correctly.
}
