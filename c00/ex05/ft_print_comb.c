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

#include <unistd.h>

void	ft_print(d, e, f)
{
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
	if (d != 7)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	d;
	char	e;
	char	f;

	d = '0';
	while (d <= '7')
	{
		e = d + 1;
		while (e <= '8')
		{
			f = e + 1;
			while (f <= '9')
			{
				ft_print(d, e, f);
				f++;
			}
			e++;
		}
		d++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/