/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:35:46 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/04 17:35:47 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include<stdio.h>
int main(void)
{
	printf("0^0 = %d\n", ft_recursive_power(0,0));
	printf("0^2 = %d\n", ft_recursive_power(0,2));
	printf("2^-2 = %d\n", ft_recursive_power(2,-2));
	printf("2^0 = %d\n", ft_recursive_power(2,0));
	printf("5^3 = %d\n", ft_recursive_power(5,3));
	printf("-5^3 = %d\n", ft_recursive_power(-5,3));
}
*/