/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:29:18 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/30 15:29:20 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int		main(void)
{
	char alpha[] = "ABCDEFGHrstuvwxyz12";
	char *p_alp;
	p_alp = alpha;
	printf("%s = %d\n", alpha, ft_str_is_alpha(p_alp));
	return (0);
}
*/