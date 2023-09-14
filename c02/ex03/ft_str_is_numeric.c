/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:08:49 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/31 10:08:51 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!('0' <= *str && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int		main(void)
{
	char numeric[] = "0123456789asd";
	char *p_num;
	p_num = numeric;
	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
	return (0);
}
*/