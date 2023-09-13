/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:31:47 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/04 13:31:50 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_double_check(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (base[len])
		len++;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_check(char *base)
{
	int	i;

	i = 0;
	if (base_double_check(base) == 0)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ' || (9 <= base[i] && base[i] <= 13))
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	is_base(char *base, char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == *str)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(char *base, char *str, int baselen)
{
	int	i;
	int	j;
	int	res;

	res = 0;
	j = 0;
	while (is_base(base, &str[j]))
	{
		i = 0;
		while (base[i])
		{
			if (base[i] == str[j])
			{
				res = baselen * res + i;
				break ;
			}
			i++;
		}
		j++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	flag;
	int	size;
	int	i;

	size = 0;
	flag = 1;
	i = 0;
	if (base_check(base) == 0)
		return (0);
	while (base[size] != '\0')
		size++;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag = -flag;
		i++;
	}
	return (flag * ft_atoi(base, &str[i], size));
}

/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_atoi_base("-+---+--5ad ttt", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("7fffffff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("-80000000", "0123456789abcdef"));
}
*/