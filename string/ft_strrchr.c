/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strrchr.c					:+:	 :+:	:+:   */
/*						      +:+ +:+	      +:+     */
/*   By: yrigny <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/09 16:06:08 by yrigny	       #+#    #+#	      */
/*   Updated: 2023/11/09 16:06:11 by yrigny	      ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	signed int	len;

	len = 0;
	while (s[len])
		len++;
	s += len;
	while (len-- >= 0)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
