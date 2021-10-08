#ifndef LIBFT_H
# define LIBFT_H

// TODO: It isn't specified whether I'm allowed to use this header! #define it?
# include <stddef.h> // size_t

# include <stdio.h> // printf()
# include <assert.h> // assert()
# include <ctype.h> // isalnum()
# include <string.h> // strlen()

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

//

int		test_ft_isalpha(void);
int		test_ft_isdigit(void);
int		test_ft_isalnum(void);
int		test_ft_isascii(void);
int		test_ft_isprint(void);

int		test_ft_strlen(void);

int		test_ft_memset(void);

#endif
