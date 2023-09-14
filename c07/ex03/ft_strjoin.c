/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:32:10 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/07 18:32:12 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src, char *sep, int total_len)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	if (ft_strlen(dest) < total_len)
	{
		while (sep[j])
		{
			dest[i] = sep[j];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		if (strs[i] != NULL)
		{
			len = len + ft_strlen(strs[i]);
			if (i < size - 1)
				len = len + ft_strlen(sep);
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		len;

	if (size == 0)
	{
		result = (char *)malloc(1);
		result[0] = '\0';
		return (result);
	}
	i = 0;
	len = total_len(size, strs, sep);
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (0);
	while (i < size)
	{
		ft_strcat(result, strs[i], sep, len);
		i++;
	}
	result[len] = '\0';
	return (result);
}

/*

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[10];

	text[0] = "Test";
	text[1] = "how";
	text[2] = "it";
	text[3] = "works";
	text[4] = "it";
	text[5] = "seems";
	text[6] = "nice";
	text[7] = "good";
	text[8] = "job";
	text[9] = "dude!";

	printf("%s\n", ft_strjoin(10, text, " - "));
}
*/