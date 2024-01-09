/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:05:20 by yrigny            #+#    #+#             */
/*   Updated: 2023/11/10 17:05:23 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = 0;
	while (s[len])
		len++;
	dup = (char *)malloc(sizeof(char) *(len + 1));
	if (!dup)
		return (0);
	return (ft_memcpy(dup, s, len + 1));
}
