#include "../libft.h"
#include "../tests.h"

void	test_ft_strncmp(void)
{
	printf("%d\n", strncmp("atoms\0\0\0\0", "atomsaaa", 5));   // == 0 First 5 characters of strings are the same
	printf("%d\n", strncmp("atoms\0\0\0\0", "atoms\0abc", 8)); // == 0 Strings are the same up through the null terminator
	// TODO: strncmp("atoms\0\0\0\0", "atoms\0abc", 8) probably only returns 0 because the default memory value is 0!
}
