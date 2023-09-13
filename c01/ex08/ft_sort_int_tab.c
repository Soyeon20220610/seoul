/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:41:29 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/30 11:41:31 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = 0;
	while (i < size -1)
	{
		while (j < size - (i + 1))
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab [j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
