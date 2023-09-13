/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjepar <minjepar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:40:03 by minjepar          #+#    #+#             */
/*   Updated: 2023/08/27 11:53:55 by minjepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		check_str(char *str);
int		atoi(char *str);
void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int		x;
	int		y;

	if (argc != 3)
	{
		write(2, "[Usage] : ./[exefile] [int x] [int y]", 37);
		return (1);
	}
	else
	{
		if (check_str(argv[1]) && check_str(argv[2]))
		{
			x = atoi(argv[1]);
			y = atoi(argv[2]);
			rush(x, y);
		}
		else
			return (1);
	}
	return (0);
}

int	atoi(char *str)
{
	int			flag;
	long long	res;

	flag = 0;
	if (*str == '-')
	{
		flag = 1;
		str = str + 1;
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10;
		res = res + (*str - '0');
		str = str + 1;
	}
	if (flag == 1)
		res = res * -1;
	return ((int)res);
}

int	check_str(char *str)
{
	unsigned long long	atoi_r;
	char				*p;

	p = str;
	atoi_r = 0;
	while (*p != '\0')
	{
		if (!(*p >= '0' && *p <= '9') || (p - str) > 10)
		{
			write(2, "[ERROR] invalid argument", 24);
			return (0);
		}
		atoi_r = atoi_r * 10 + (*p - '0');
		p = p + 1;
	}
	if (atoi_r > 2147483647)
	{
		write(2, "[ERROR] integer range overflow", 30);
		return (0);
	}
	return (1);
}
