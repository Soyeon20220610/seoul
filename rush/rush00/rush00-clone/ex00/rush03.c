/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjepar <minjepar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:40:15 by minjepar          #+#    #+#             */
/*   Updated: 2023/08/27 14:10:04 by minjepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

int	error_handler(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(2, "[ERROR] Unavailable argument(argv <= 0)", 39);
		return (0);
	}
	else
		return (1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (error_handler(x, y) && i < y && (x > 0 && y > 0))
	{
		j = 0;
		while (j < x)
		{
			if (j == 0 && (i == 0 || i == y - 1))
				ft_putchar('A');
			else if (j == x - 1 && (i == 0 || i == y - 1))
				ft_putchar('C');
			else if (i == 0 || i == y - 1 || j == 0 || j == x -1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j = j + 1;
		}
		ft_putchar('\n');
		i = i + 1;
	}
}
