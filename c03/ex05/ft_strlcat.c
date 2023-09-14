/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:54:29 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/01 16:54:32 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	i;

	d = ft_strlen(dest);
	i = 0;
	if (size <= d)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && d + 1 < size)
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	dest[d] = '\0';
	return (ft_strlen(src) + d);
}

#include <stdio.h>
#include <string.h>
int				main()
{
	char			str0[50] = "hello";
	char			str1[50] = "hello";
	char			str2[] = "world!";
	unsigned int	number1;
	unsigned int	number2;

	number1 = ft_strlcat(str0, str2, 5);
	number2 = strlcat(str1, str2, 5);
	printf("String final: %s, number: %d", str0, number1);
	printf("\nString final: %s, number: %d", str1, number2);
}/*

*/