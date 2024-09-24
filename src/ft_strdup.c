/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:05:20 by yrigny            #+#    #+#             */
/*   Updated: 2024/09/24 14:34:52 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
/*
int	main(void)
{
	char	*src;
	char	*dup;

	src = "";
	dup = ft_strdup(src);
	if (dup == 0)
	{
		printf("duplication failed\n");
		free(dup);
		return (1);
	}
	else
	{
		printf("dup result:\n%s", dup);
		free(dup);
		return (0);
	}
}*/
