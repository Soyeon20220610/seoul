/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:44:26 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/31 19:44:28 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find);
int main(void)
{
	char hay[] = "Hello world!";
	char needle[10] = "ello";
	printf("%s\n", strstr(hay, needle));
	printf("%s\n", ft_strstr(hay, needle));

	strcpy(needle, "wor");
	printf("%s\n", strstr(hay, needle));
	printf("%s\n", ft_strstr(hay, needle));
}/*

*/