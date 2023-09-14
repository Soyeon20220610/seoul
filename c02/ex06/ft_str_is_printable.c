/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:19:00 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/31 10:19:02 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(32 <= *str && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int		main(void)
{
	char string[] = "Normal characters string";
	char *p_str;
	p_str = string;

	char unpr[] = "\t\a";
	char *p_unp;
	p_unp = unpr;
	printf("%s = %d\n", string, ft_str_is_printable(p_str));
	printf("%s = %d\n", unpr, ft_str_is_printable(p_unp));

	return (0);
}
*/