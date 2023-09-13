/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:11:06 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/26 11:11:10 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	idx1;
	int	idx2;

	idx1 = 0;
	idx2 = 0;
	while (idx2 < y && (x != 0 && y != 0))
	{
		idx1 = 0;
		while (idx1 < x)
		{	
			if ((idx1 == 0 || idx1 == x - 1) && idx2 == 0)
				ft_putchar('A');
			else if ((idx1 == 0 || idx1 == x - 1) && idx2 == y - 1)
				ft_putchar('C');
			else if (idx1 == 0 || idx1 == x - 1 || idx2 == 0 || idx2 == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			idx1++;
		}
		write (1, "\n", 1);
		idx2++;
	}
}
