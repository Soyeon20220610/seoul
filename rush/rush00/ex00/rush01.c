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
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < y && (x != 0 && y != 0))
	{
		i = 0;
		while (i < x)
		{	
			if (i == 0 && j == 0)
				ft_putchar('/');
			else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
				ft_putchar('\\');
			else if (i == x - 1 && j == y - 1)
				ft_putchar('/');
			else if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		write (1, "\n", 1);
		j++;
	}
}
