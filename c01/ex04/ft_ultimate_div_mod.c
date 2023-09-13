/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:52:47 by soyekim           #+#    #+#             */
/*   Updated: 2023/08/28 10:52:50 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	original_a;
	int	original_b;

	original_a = *a;
	original_b = *b;
	*a = original_a / original_b;
	*b = original_a % original_b;
}

// #include<stdio.h>
// int	main(void)
// {
// 	int num_a;
// 	int num_b;
// 	int *a;
// 	int *b;

// 	num_a = 11;
// 	num_b = 2;
// 	a = &num_a;
// 	b = &num_b;
// 	ft_ultimate_div_mod(a, b);
// 	printf("%d, %d", *a, *b);
// 	return(0);
// }
