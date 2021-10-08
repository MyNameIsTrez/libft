#ifndef LIBFT_H
# define LIBFT_H

// # LIBRARIES # //

// TODO: It isn't specified whether I'm allowed to use this header! #define it?
# include <stddef.h> // size_t

# include <stdio.h> // printf()
# include <assert.h> // assert()
# include <ctype.h> // isalnum()
# include <string.h> // strlen()
# include <strings.h> // bzero()

// # FUNCTIONS # //

//// ## PART 1 ## ////

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
			size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src,
			size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);

////// ### USING MALLOC ### //////

void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

//// ## PART 2 ## ////

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//// ## BONUS ## ////

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//// ## ADDITIONAL ## ////

int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strstr(const char *haystack, const char *needle);

// # TESTS # //

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

//// ## ADDITIONAL ## ////

void	test_ft_strcmp(void);
void	test_ft_strstr(void);

#endif
