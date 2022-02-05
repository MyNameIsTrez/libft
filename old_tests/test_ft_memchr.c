#include "tests.h"
#include <unistd.h>
#include <fcntl.h>

Test(memchr, war6)
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	//												  rwxrwxrwx
	int fd = open("memchr_out", O_WRONLY | O_CREAT, 0b110000000);
	dprintf(fd, "'%s'", (char *)ft_memchr(tab, -1, 7));
}
