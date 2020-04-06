#ifndef _LIBFT_H
#define _LIBFT_H
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(const char *nptr);
void ft_bzero(void *s, int n);
void *ft_calloc(int count, int size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memccpy(void *dst, const void *src, int c, int n);
void *ft_memchr(char *s, int c, int n);
int ft_memcmp(const void *s1, const void *s2, int n);
void *ft_memcpy(void *src, const void *dst, int n);
void *ft_memset(void *b, int c, int len);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char ft_strchr(const char *s, int c);
char *ft_strdup(char *src);
char *ft_strjoin(char *s1, char *s2);
unsigned int ft_strlcat(char *dst, char *src, unsigned int size);
unsigned int ft_strlcpy(char *dst, char *src, unsigned int dstsize);
int ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, int n);
char *ft_strnstr(const char *s1, const char *s2, unsigned int len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(const char *s1, const char *set);
char *ft_substr(const char *s, int start, int len);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
