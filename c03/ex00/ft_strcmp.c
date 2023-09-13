/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:36:21 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/31 16:36:24 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0')
	{
		// if (s1[i] > s2[i])
		// 	return (1);
		// else if (s1[i] < s2[i])
		// 	return (-1);
		i++;
	}
    return (s1[i] - s2[i]);
}

/*
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char s1[20] = "abcdee";
	char s2[20] = "abcde";

	printf("%d\n",strcmp(s1, s2));
	printf("%d\n",ft_strcmp(s1, s2));

   	char s3[20] = "abcde\200";
	char s4[20] = "abcde\0";

	printf("%d\n",strcmp(s3, s4));
	printf("%d",ft_strcmp(s3, s4));
}*/