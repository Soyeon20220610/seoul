/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:06:08 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/31 11:06:11 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num(char *str)
{
	if ('0' <= *str && *str <= '9')
		return (1);
	else
		return (0);
}

int	is_alpha(char *str)
{
	if (('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (i == 0 && ('a' <= str[i] && str[i] <= 'z'))
				str[i] = str[i] - ('a' - 'A');
		else if (i != 0 && (!is_num(&str[i - 1]) && !is_alpha(&str[i - 1])))
		{
			if ('a' <= str[i] && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
}
*/