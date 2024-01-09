/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:50:59 by yrigny            #+#    #+#             */
/*   Updated: 2023/11/08 11:51:01 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	cpylen;
	size_t	i;

	len = 0;
	while (src[len])
		len++;
	if (size < 1)
		return (len);
	if (size - 1 >= len)
		cpylen = len;
	if (size - 1 < len)
		cpylen = size - 1;
	i = 0;
	while (i < cpylen)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (len);
}
