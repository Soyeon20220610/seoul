/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:40:15 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/31 19:40:17 by soyekim          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = ft_strlen(dest);
	k = 0;
	while (k < nb && src[k])
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[] = "First~";
	char str2[30] = "1234";
	printf("%s\n",ft_strncat(str1, str2, 2));

	char str3[9] = "First~";
	char str4[30] = "1234";
	printf("%s\n",strncat(str3, str4, 2));
}/*

*/