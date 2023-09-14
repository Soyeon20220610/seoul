/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:57:42 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/09 11:57:44 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		base_double_check(char *base);
int		base_check(char *base);
void	ft_putnbr_base(int nbr, char *base);

int	is_base(char *base, char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == *str)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(char *base, char *str, int baselen)
{
	int	i;
	int	j;
	int	res;

	res = 0;
	j = 0;
	while (is_base(base, &str[j]))
	{
		i = 0;
		while (base[i])
		{
			if (base[i] == str[j])
			{
				res = baselen * res + i;
				break ;
			}
			i++;
		}
		j++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	flag;
	int	size;
	int	i;

	size = 0;
	flag = 1;
	i = 0;
	while (base[size] != '\0')
		size++;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag = -flag;
		i++;
	}
	return (flag * ft_atoi(base, &str[i], size));
}
