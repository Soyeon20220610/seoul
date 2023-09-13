/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:42:47 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/31 10:42:49 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int		main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_lwr;
	p_lwr = lowercase;
	
	char allcases[] = "abcdefghijkLMNOPQRSTUVWXYZ";
	char *p_all;
	p_all = allcases;

	printf("\n-----\n%s = ", lowercase);
	printf("%s\n", ft_strlowcase(p_lwr));
	printf("%s = ", allcases);
	printf("%s\n", ft_strlowcase(p_all));
}
*/