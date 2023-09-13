/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:14:09 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/31 10:14:10 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!('a' <= *str && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int		main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_lwr;
	p_lwr = lowercase;

	char special[] = "abcdefghijklmnopqrstuvwxyz_";
	char *p_spe;
	p_spe = special;

	printf("%s = %d\n", lowercase, ft_str_is_lowercase(p_lwr));
	printf("%s = %d\n", special, ft_str_is_lowercase(p_spe));
	return (0);
}
*/