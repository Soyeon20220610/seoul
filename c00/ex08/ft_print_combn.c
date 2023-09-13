/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:08:35 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/26 19:08:37 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putvet(int vet[], int n)
// {
// 	int i;
// 	char	c;

// 	i = 0;
// 	while (i < n)
// 	{
// 		c = vet[i] + '0';	
//         write(1, &c, 1);
// 		i++;
// 	}
// }

// int		ft_get_index(int combn[], int n)
// {
// 	int c;
// 	int max;

// 	c = 0;
// 	max = 10 - n;
// 	while (c < n)
// 	{
// 		if (combn[c] == max)
// 			return (c - 1);
// 		if (c == (n - 1) && combn[c] < max)
// 			return (c);
// 		c++;
// 		max++;
// 	}
// 	return (-1);
// }

// void	ft_increment(int vet[], int n, int index)
// {
// 	int c;

// 	c = index + 1;
// 	vet[index]++;
// 	while (c <= n)
// 	{
// 		vet[c] = vet[c - 1] + 1;
// 		c++;
// 	}
// }

// void	ft_print_combn(int n)
// {
// 	int combn[n];
// 	int c;
// 	int pos_index;

// 	if (n >= 10 || n <= 0)
// 		return ;
// 	else
// 	{
// 		c = 0;
// 		while (c < n)
// 		{
// 			combn[c] = c;
// 			c++;
// 		}
// 		while (ft_get_index(combn, n) != -1)
// 		{
// 			ft_putvet(combn, n);

// 			pos_index = ft_get_index(combn, n);
// 			ft_increment(combn, n, pos_index);
// 			write(1, ", ", 2);
// 		}
// 		ft_putvet(combn, n);
//     }
// }

// int main(void)
// {
//     ft_print_combn(2);
// }

#include<unistd.h>
void	ft_print(int arr[], int n)
{
	int	i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

void	ft_recursive(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (i == 0)
			arr [0] = 0;
		else if (i == 1)
			arr [1] = 1;
		else
		{
			arr [i] = arr[i - 1] + 1;
			while (arr[i] <= 11 - n + i)
			{
				if (arr[i] > arr[i - 1])
					ft_print(arr, n);
				arr[i]++;
			}
			i++;
			ft_recursive(arr, n, r)
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[n];
	int i;

	if (n >= 10 || n == 0)
		return ;
	else
	{
		i = 0;
		while (i < n)
		{
			arr[i] = i;
			i++;
		}
		
	}
}