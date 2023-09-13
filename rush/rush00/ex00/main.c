/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:10:39 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/26 11:10:42 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	rush(int x, int y);

int	char_to_int(char *value)
{
	int	n;
	int sign;

	n = 0;
	sign = 1;
	while (*value)
	{
		if (('0' <= *value) && (*value <= '9'))
			n = 10 * n + *value - '0';
		else if (*value == '-')
			sign = -1;
		value = value + 1;
	}
	return (n * sign);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc <= 1 || argc > 3)
	{
		write(1, "your input is wrong", 20);
		return (0);
	}
	
	i = char_to_int(argv[1]);
	j = char_to_int(argv[2]);
	rush (i, j);
	return (0);
}
