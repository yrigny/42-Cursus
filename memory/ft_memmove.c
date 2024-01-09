/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:15:44 by yrigny            #+#    #+#             */
/*   Updated: 2023/11/08 11:15:51 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*d;

	if (src == NULL || dest == NULL)
		return (NULL);
	d = dest;
	if (dest > src && dest < src + n)
	{
		dest += n - 1;
		src += n - 1;
		while (n-- > 0)
			*(char *)dest-- = *(char *)src--;
	}
	else
		while (n-- > 0)
			*(char *)dest++ = *(char *)src++;
	return (d);
}
