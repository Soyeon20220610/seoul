/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:14:48 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/30 12:14:50 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include<stdio.h>
int main(void)
{
	char sen1[30] = "hello";
	char sen2[30] = "world";
	ft_strcpy(sen1, sen2);
	printf("%s\n",sen1);
}
*/