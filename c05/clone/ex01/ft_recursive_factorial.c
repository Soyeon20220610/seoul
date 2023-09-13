/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:00:21 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/04 17:00:22 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int main(void)
{
	printf("0! = %d\n", ft_recursive_factorial(0));
	printf("1! = %d\n", ft_recursive_factorial(1));
	printf("5! = %d\n", ft_recursive_factorial(5));
}
*/