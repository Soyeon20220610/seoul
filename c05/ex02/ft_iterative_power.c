/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:07:51 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/04 17:07:54 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		num = num * nb;
		i++;
	}
	return (num);
}

/*#include<stdio.h>
int main(void)
{
	printf("0^2 = %d\n", ft_iterative_power(0,2));
	printf("5^0 = %d\n", ft_iterative_power(5,0));
	printf("0^0 = %d\n", ft_iterative_power(0,0));
	printf("2^-2 = %d\n", ft_iterative_power(2,-2));
	printf("1^3 = %d\n", ft_iterative_power(1,3));
	printf("5^3 = %d\n", ft_iterative_power(+5,3));
	printf("-2^5 = %d\n", ft_iterative_power(-2,5));
}*/