/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 16:23:32 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 16:02:50 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// # LIBRARIES # //

# include <stddef.h>	// size_t

// # STRUCTS # //

typedef struct s_list	t_list;
struct s_list
{
	void	*content;
	t_list	*next;
};

// # FUNCTIONS # //

//// ## PART 1 ## ////

int		ft_isalpha(int chr);
int		ft_isdigit(int chr);
int		ft_isalnum(int chr);
int		ft_isascii(int chr);
int		ft_isprint(int chr);

size_t	ft_strlen(const char *str);
void	*ft_memset(void *dst, int chr, size_t len);
void	ft_bzero(void *str, size_t nbr);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);
int		ft_toupper(int chr);
int		ft_tolower(int chr);
char	*ft_strchr(const char *str, int chr);
char	*ft_strrchr(const char *str, int chr);
int		ft_strncmp(const char *str1, const char *str2, size_t len);
void	*ft_memchr(const void *ptr, int chr, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);

////// ### USING MALLOC ### //////

void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *str);

//// ## PART 2 ## ////

char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_strtrim(char const *str, char const *trim_set);
char	**ft_split(char const *str, char chr);
char	*ft_itoa(int nbr);
char	*ft_strmapi(char const *input_str, char (*fun)(unsigned int, char));
void	ft_striteri(char *str, void (*fun)(unsigned int, char*));
void	ft_putchar_fd(char chr, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int nbr, int fd);

//// ## BONUS ## ////

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*fun)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*fun)(void *), void (*del)(void *));

//// ## EXTRA ## ////

// int		ft_char_to_digit(const char chr);
// char	ft_digit_to_char(const int nbr);
// void	*ft_free(void *ptr);
// size_t	ft_get_number_len(int nbr);
// int		ft_isspace(const int chr);
// int		ft_max(const int a, const int b);
// int		ft_min(const int a, const int b);
// char	*ft_str_not_chr(const char *str, const int chr)
// char	*ft_stralloc(const size_t len);
// int		ft_strcmp(const char *str1, const char *str2);
// size_t	ft_strnlen(const char *str, const size_t max_len);
// char	*ft_strstr(const char *haystack, const char *needle);
// char	*ft_strtrim_whitespace(char const *str);

#endif
