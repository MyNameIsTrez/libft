/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 16:23:32 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 15:47:37 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// LIBRARIES //

# include <stddef.h>	// size_t

// STRUCTS //

/**
 * @brief A singly linked list.
 *
 * @param content The data contained in the element.
 * @param next The next element’s address or NULL if it’s the last element.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// FUNCTIONS //

//// PART 1 ////

int		ft_isalpha(int chr);
int		ft_isdigit(int chr);
int		ft_isalnum(int chr);
int		ft_isascii(int chr);
int		ft_isprint(int chr);

size_t	ft_strlen(const char *str);
void	*ft_memset(void *dst, int chr, size_t len);
void	ft_bzero(void *ptr, size_t size);
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
int		ft_memcmp(const void *src1, const void *src2, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);

////// USING MALLOC //////

void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *str);

//// PART 2 ////

char	*ft_substr(const char *str, unsigned int start, size_t len);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strtrim(const char *str, const char *trim_set);
char	**ft_split(const char *str, char sep);
char	*ft_itoa(int nbr);
char	*ft_strmapi(const char *input_str, char (*fun)(unsigned int, char));
void	ft_striteri(char *str, void (*fun)(unsigned int, char*));
void	ft_putchar_fd(char chr, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int nbr, int fd);

//// BONUS ////

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*fun)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*fun)(void *), void (*del)(void *));

#endif
