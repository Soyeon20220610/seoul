/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:42:16 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/04 18:42:18 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;
	long long	nbr;

	nbr = (long long)nb;
	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*// 소수면 1, 아니면 0
#include<stdio.h>
int	main(void)
{
	printf("sqrt(0) = %d\n", ft_is_prime(0));
	printf("sqrt(-25) = %d\n", ft_is_prime(-25));
	printf("sqrt(25) = %d\n", ft_is_prime(25));
	printf("sqrt(100) = %d\n", ft_is_prime(100));
	printf("sqrt(7) = %d\n", ft_is_prime(7));
	printf("sqrt(13) = %d\n", ft_is_prime(13));
	printf("sqrt(2147483647) = %d\n", ft_is_prime(2147483647));
}*/