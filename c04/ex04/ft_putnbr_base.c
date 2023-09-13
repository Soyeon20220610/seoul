/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:42:44 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/02 14:42:46 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	base_double_check(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(base);
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_check(char *base)
{
	int	i;

	i = 0;
	if (base_double_check(base) == 0)
		return (0);
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			lenb;
	long long	temp;

	temp = (long long)nbr;
	lenb = ft_strlen(base);
	if (base_check(base) == 1)
	{
		if (nbr < 0)
		{
			write (1, "-", 1);
			temp = -temp;
		}
		if (temp >= lenb)
			ft_putnbr_base (temp / lenb, base);
		write (1, &base[temp % lenb], 1);
	}
}

/*
#include <stdio.h>
int main(void)
{
	char base[] = "01";
	ft_putnbr_base(1, base);
	// printf("\n");
	// ft_putnbr_base(1, base);
	// printf("\n");
    // ft_putnbr_base(-2147483648, base);
	// printf("\n");

    // ft_putnbr_base(20, "01");
	// printf("\n");

    // ft_putnbr_base(-42, "++01");
	// printf("\n");
}
*/