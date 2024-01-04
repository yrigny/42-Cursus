/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memcmp.c					:+:	 :+:	:+:   */
/*						      +:+ +:+	      +:+     */
/*   By: yifanr <yifanr@student.42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/10 00:14:14 by yifanr	       #+#    #+#	      */
/*   Updated: 2023/11/10 00:16:28 by yifanr	      ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
