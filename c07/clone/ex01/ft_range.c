/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:55:43 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/07 17:55:44 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	if (arr == NULL)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min ++;
	}
	return (arr);
}

/*
#include <stdio.h>
int main(void)
{
   int	*arr;
   int	i = 0;
   int min = 4;
   int	max = 4;

   arr = ft_range(min,max);
   while (i < max - min)
   {
		printf("%d\n", arr[i]);
		i++;
   }
}*/