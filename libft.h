#ifndef _LIBFT_H
#define _LIBFT_H
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

int ft_atoi(char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(int count, int size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void ft_lstadd_back(t_list **alst, t_list *new);
void ft_lstadd_front(t_list **alst, t_list *new);
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstnew(void *constant);
t_list *ft_lstlast(t_list *road);
int ft_lstsize(t_list *lst);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *src, const void *dst, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char *str, char *charset);
char *ft_strchr(const char *s, int c);
char *ft_strdup(char *src);
char *ft_strjoin(char *s1, char *s2);
size_t ft_strlcat(char *dst, char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlen(const char *s);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *s1, const char *s2, unsigned int len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(const char *s1, const char *set);
char *ft_substr(const char *s, size_t start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
