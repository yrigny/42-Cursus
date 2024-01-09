/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:12:24 by yrigny            #+#    #+#             */
/*   Updated: 2023/11/14 11:50:39 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	dest = malloc(i + 1);
	if (!dest)
		return (NULL);
	dest[i] = '\0';
	while (i--)
		dest[i] = (*f)(i, s[i]);
	return (dest);
}
