/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:33:19 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/26 10:33:22 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num)
{
	if (0 <= num && num <= 9)
		ft_putchar2('0', num + 48);
	else
		ft_putchar2((num / 10) + 48, (num % 10) + 48);
}

void	ft_catint(int first, int second)
{
	if (!(first == 00 && second == 01))
		write (1, " ", 1);
	ft_putint(first);
	write (1, " ", 1);
	ft_putint(second);
	if (first != 98 || second != 99)
		write(1, ",", 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_catint(num1, num2);
			num2++;
		}
		num1++;
	}
}

/*
int main(void)
{
    ft_print_comb2();
}
*/