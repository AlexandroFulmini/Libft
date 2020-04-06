#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int ft_is_sep(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i])
    {
        if (charset[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int ft_count_words(char *str, char *charset)
{
    int nbr_of_words;
    int is_word;
    int i;

    i = 0;
    is_word = 0;
    nbr_of_words = 0;
    while (str[i])
    {
        if (ft_is_sep(str[i], charset))
            is_word = 0;
        else if (!ft_is_sep(str[i], charset) && (is_word == 0))
        {
            is_word = 1;
            nbr_of_words++;
        }
        i++;
    }
    return (nbr_of_words);
}

int ft_len_word(char *str, char *charset, int i)
{
    int len;

    len = 0;
    while (!ft_is_sep(str[i], charset) && str[i])
    {
        len++;
        i++;
    }
    return (len);
}

char **ft_split(char *str, char *charset)
{
    char **split;
    int len_word;
    int i;
    int j;

    i = 0;
    j = 0;
    split = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
    while (i < ft_count_words(str, charset))
    {
        len_word = 0;
        while (ft_is_sep(str[j], charset) && str[j])
            j++;
        split[i] = malloc(sizeof(char *) * (ft_len_word(str, charset, j) + 1));
        while (len_word < ft_len_word(str, charset, j))
        {
            split[i][len_word] = str[len_word + j];
            len_word++;
        }
        split[i][len_word] = '\0';
        j = j + ft_len_word(str, charset, j);
        i++;
    }
    split[i] = 0;
    return (split);
}
