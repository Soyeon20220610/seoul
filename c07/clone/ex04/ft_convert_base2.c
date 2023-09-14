/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:58:03 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/09 11:58:04 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	is_base(char *base, char *str);
int	ft_atoi(char *base, char *str, int baselen);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_double_check(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(base);
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

void	ft_putnbr_base(int nbr, char *base, char arr[])
{
	int			lenb;
	long long	temp;

	temp = (long long)nbr;
	lenb = ft_strlen(base);
	if (nbr < 0)
	{
		*arr = '-';
		temp = -temp;
		arr++;
	}
	if (temp >= lenb)
		ft_putnbr_base (temp / lenb, base, arr);
	arr[ft_strlen(arr)] = base[temp % lenb];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		first;
	int		len;
	char	*arr;
	int		temp;

	len = 0;
	if (base_check(base_from) == 0 || base_check(base_to) == 0)
		return (0);
	first = ft_atoi_base(nbr, base_from);
	temp = first;
	while (temp != 0)
	{
		temp = temp / ft_strlen(base_to);
		len++;
	}
	if (first < 0)
		len++;
	arr = (char *)malloc(len + 1);
	if (arr == NULL)
		return (0);
	ft_putnbr_base(first, base_to, arr);
	arr[len] = '\0';
	return (arr);
}

/*
#include<stdio.h>
int	main()
{
	char *arr = ft_convert_base("-5ad", "0123456789abcdef", "01");
	printf("-5ad (16 -> 2) = %s\n", arr); // 10110101101

	char *arr1 = ft_convert_base("10110101101", "01", "0123456789abcdef");
	printf("10110101101 (2 -> 16) = %s\n", arr1); // 010110101101

	char *arr2 = ft_convert_base("100", "01", "0123456789abcdef");
	printf("100 (2->16) = %s\n", arr2); 

	char *arr3 = ft_convert_base("5ad", "0123456789abcdef", "01234567");
	printf("5ad (16 -> 8) = %s\n", arr3);

	char *arr4 = ft_convert_base("-wqrurieyri", "pqwertyuio", "01");
	printf("-wqrurieyri (10 -> 2) = %s\n", arr4);
}
*/