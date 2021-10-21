#ifndef TESTS_H
# define TESTS_H

# include <stdio.h>		// printf(), dprintf()
# include <assert.h>	// assert()
# include <ctype.h>		// isalnum(), isascii()
# include <string.h>	// strlen()
# include <strings.h>	// bzero()
# include <unistd.h>	// write()

//// ## PART 1 ## ////

void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);

void	test_ft_strlen(void);
void	test_ft_memset(void);
void	test_ft_bzero(void);
void	test_ft_memcpy(void);
void	test_ft_memmove(void);
void	test_ft_strlcpy(void);
void	test_ft_strlcat(void);
void	test_ft_toupper(void);
void	test_ft_tolower(void);
void	test_ft_strchr(void);
void	test_ft_strrchr(void);
void	test_ft_strncmp(void);
void	test_ft_memchr(void);
void	test_ft_memcmp(void);
void	test_ft_strnstr(void);
void	test_ft_atoi(void);

////// ### USING MALLOC ### //////

void	test_ft_calloc(void);
void	test_ft_strdup(void);

//// ## PART 2 ## ////

void	test_ft_substr(void);
void	test_ft_strjoin(void);
void	test_ft_strtrim(void);
void	test_ft_split(void);
void	test_ft_itoa(void);
void	test_ft_strmapi(void);
void	test_ft_striteri(void);
void	test_ft_putchar_fd(void);
void	test_ft_putstr_fd(void);
void	test_ft_putendl_fd(void);
void	test_ft_putnbr_fd(void);

//// ## BONUS ## ////

void	test_ft_lstnew(void);
void	test_ft_lstadd_front(void);
void	test_ft_lstsize(void);
void	test_ft_lstlast(void);
void	test_ft_lstadd_back(void);
void	test_ft_lstdelone(void);
void	test_ft_lstclear(void);
void	test_ft_lstiter(void);
void	test_ft_lstmap(void);

//// ## EXTRA ## ////

void	test_EXTRA_ft_char_to_digit(void);
void	test_EXTRA_ft_digit_to_char(void);
void	test_EXTRA_ft_get_number_len(void);
void	test_EXTRA_ft_isspace(void);
void	test_EXTRA_ft_max(void);
void	test_EXTRA_ft_min(void);
void	test_EXTRA_ft_str_not_chr(void);
void	test_EXTRA_ft_stralloc(void);
void	test_EXTRA_ft_strcmp(void);
void	test_EXTRA_ft_strnlen(void);
void	test_EXTRA_ft_strstr(void);
void	test_EXTRA_ft_strtrim_whitespace(void);

#endif
