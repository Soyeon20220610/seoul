/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjepar <minjepar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:53:07 by minjepar          #+#    #+#             */
/*   Updated: 2023/08/27 12:06:02 by minjepar         ###   ########.fr       */
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
	if (error_handler(x, y))
	{
		while (i < y && x > 0 && y > 0)
		{
			j = 0;
			while (j < x)
			{
				if (i == 0 && (j == 0 || j == x - 1))
					ft_putchar('A');
				else if (i == y - 1 && (j == 0 || j == x - 1))
					ft_putchar('C');
				else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
					ft_putchar('B');
				else
					ft_putchar(' ');
				j = j + 1;
			}
			ft_putchar('\n');
			i = i + 1;
		}
	}
}
