/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:07:28 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/06 16:07:30 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	put_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int size, char *arr[])
{
	int		i;
	int		j;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size - i)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
			{
				swap(&arr[j], &arr[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_int_tab(argc, argv);
	while (argv[i])
	{
		put_str(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
