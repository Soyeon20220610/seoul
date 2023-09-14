/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:49:12 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/31 14:49:14 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
void	char_to_hex(char *buf, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i % 16 == 0)
			buf[i] = ;
	}
}
*/

/*
void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		if (str[i] < 32 && str[i] > 126)
		{
			char_to_hex(str[i], len);
		}
	}
}
*/

/*
#include<stdio.h>
int main(void)
{
	ft_putstr_non_printable("asdfa asdf");
	printf("\n");
	ft_putstr_non_printable("as\ndfa\200 asdf\x61");
	printf("\n");
}

*/