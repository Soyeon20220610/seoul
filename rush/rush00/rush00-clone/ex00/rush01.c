/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjepar <minjepar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:41:02 by minjepar          #+#    #+#             */
/*   Updated: 2023/08/27 12:34:40 by minjepar         ###   ########.fr       */
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
	while (error_handler(x, y) && i < y && x > 0 && y > 0)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0 && j == 0)
				ft_putchar('/');
			else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
				ft_putchar('\\');
			else if (i == y - 1 && j == x - 1)
				ft_putchar('/');
			else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j = j + 1;
		}
		ft_putchar('\n');
		i = i + 1;
	}
}
