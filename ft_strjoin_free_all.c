/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_all.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <afulmini@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:56:14 by afulmini          #+#    #+#             */
/*   Updated: 2021/05/29 11:01:38 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free_all(char *s1, char *s2)
{
	int i;
	int j;
	char *dest;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(dest = malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	free(s1);
	free(s2);
	return (dest);
}