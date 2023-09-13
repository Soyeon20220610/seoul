/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:01:54 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/29 17:01:57 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i <= (size - 1) / 2)
	{
		temp = tab[i];
		tab[i] = tab [size - (i + 1)];
		tab[size - (i + 1)] = temp;
		i++;
	}
}

#include<stdio.h>
int main(void)
{
	printf("7번 문제 입니다\n");
	printf("ft_rev_int_tab\n");
	int tab[] = {0,1,2,3,4,5};
	printf ("%d,%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
	ft_rev_int_tab(tab,6);
	printf(" => \n");
	printf ("%d,%d,%d,%d,%d,%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
}