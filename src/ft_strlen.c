/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:53:05 by yrigny            #+#    #+#             */
/*   Updated: 2024/09/24 14:34:26 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	printf("strlen result: %lu\n", strlen(argv[1]));
	printf("ft_strlen result: %zu\n", ft_strlen(argv[1]));
	return 0;
}*/
