/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:16:48 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/31 10:16:49 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!('A' <= *str && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int		main(void)
{
	char uppercase[] = "ABCDEFJSDF";
	char *p_lwr;
	p_lwr = uppercase;

	char special[] = "abcdefg_";
	char *p_spe;
	p_spe = special;

	printf("%s = %d\n", uppercase, ft_str_is_uppercase(p_lwr));
	printf("%s = %d\n", special, ft_str_is_uppercase(p_spe));
	return (0);
}
*/