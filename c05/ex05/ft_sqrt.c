/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:53:24 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/04 17:53:26 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	n;
	long long	nbr;

	nbr = (long long)nb;
	n = 1;
	if (nbr < 0)
		return (0);
	while (n * n <= nbr)
	{
		if (n * n == nbr)
			return ((int)n);
		n++;
	}
	return (0);
}

/*#include<stdio.h>
int	main(void)
{
	printf("sqrt(0) = %d\n", ft_sqrt(0));
	printf("sqrt(-25) = %d\n", ft_sqrt(-25));
	printf("sqrt(25) = %d\n", ft_sqrt(25));
	printf("sqrt(100) = %d\n", ft_sqrt(100));
	printf("sqrt(2147483647) = %d\n", ft_sqrt(2147483647));

}*/