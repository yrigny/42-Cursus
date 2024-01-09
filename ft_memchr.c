/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memchr.c					:+:	 :+:	:+:   */
/*						      +:+ +:+	      +:+     */
/*   By: yrigny <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/09 16:56:58 by yrigny	       #+#    #+#	      */
/*   Updated: 2023/11/09 16:57:00 by yrigny	      ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
