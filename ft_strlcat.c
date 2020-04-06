unsigned int ft_srtrlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int total;

    i = 0;
    j = 0;
    total = 0;
    while (dest[i] && i < size)
        i++;
    while (src[j])
        j++;
    total = i + j;
    if (i == size)
        return (total);
    j = 0;
    while (src[j] && i + j < size - 1)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (total);
}