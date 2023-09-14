/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:03:38 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/07 18:03:41 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (i);
}

/*
#include <stdio.h>

int main()
{
	int *test;
	int min = 4;
	int max = 9;
	int size = ft_ultimate_range(&test, min, max);
	int i = 0;

	printf("min: %d, max: %d, size is %d\n", min, max, size);

	while (i < size)
	{
		printf("%d ", test[i]);
		i++;
	}
    free(test);
    return (0);
}
*/