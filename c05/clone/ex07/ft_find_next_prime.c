/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:49:45 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/04 18:49:47 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;
	long long	nbr;

	nbr = (long long)nb;
	i = 2;
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
}

/*// nb보다 큰 수 중에 소수인 가장 작은 수
#include<stdio.h>
int	main(void)
{
	printf("sqrt(-1) = %d\n", ft_find_next_prime(-1));
	printf("sqrt(1) = %d\n", ft_find_next_prime(1));
	printf("sqrt(7) = %d\n", ft_find_next_prime(7));
	printf("sqrt(13) = %d\n", ft_find_next_prime(13));
    printf("sqrt(25) = %d\n", ft_find_next_prime(25));
	printf("sqrt(100) = %d\n", ft_find_next_prime(100));
	printf("sqrt(2147483647) = %d\n", ft_find_next_prime(2147483647));
	printf("sqrt(-2147483648) = %d\n", ft_find_next_prime(-2147483648));
}*/