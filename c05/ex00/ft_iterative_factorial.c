/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:56:18 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/04 16:56:21 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			num = num * nb;
			nb--;
		}
	}
	return (num);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
}
*/