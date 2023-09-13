/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:28:12 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/02 14:28:14 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int			flag;
	long long	res;

	flag = 1;
	res = 0;
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			flag = -flag;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	if (flag == -1)
		res = -res;
	return ((int)res);
}

/*
#include <stdio.h>
int main(void)
{
	char *str = " ---+--+1234ab567";
	printf("%d\n",ft_atoi(str));
	char *str1 = "-2147483648";
	printf("%d\n",ft_atoi(str1));

}
*/