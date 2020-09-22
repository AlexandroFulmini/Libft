/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afulmini <afulmini@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 14:58:30 by afulmini          #+#    #+#             */
/*   Updated: 2020/08/23 16:20:45 by afulmini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*ptr;
	unsigned int	len;

	len = 0;
	while (s1[len])
		len++;
	if (!(ptr = malloc((len + 1) * sizeof(char))))
		return (NULL);
	len = 0;
	while (s1[len])
	{
		ptr[len] = s1[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
