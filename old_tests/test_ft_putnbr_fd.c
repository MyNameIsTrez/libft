#include "tests.h"
#include <fcntl.h>

Test(ft_putnbr_fd, basic_test)
{
	int fd = open("/tmp/ft_putnbr_fd_test", O_RDWR | O_CREAT, 0640);

	ft_putnbr_fd(-123, fd);
	char buf[20];
	ft_memset(buf, '\0', 20);
	lseek(fd, 0, SEEK_SET);
	read(fd, buf, 20);
	close(fd);
	cr_assert_str_eq(buf, "-123");
}
