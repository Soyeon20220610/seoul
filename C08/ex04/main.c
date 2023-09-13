
#include "ft_stock_str.h"
#include <stdlib.h>

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new_src;
	int		i;
	int		srclen;

	i = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	new_src = (char *)malloc(srclen + 1);
	if (new_src == NULL)
		return (0);
	while (i < srclen)
	{
		new_src[i] = src[i];
		i++;
	}
	new_src[i] = '\0';
	return (new_src);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

    ac = ac - 1;
    av = av + 1;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	i = 0;
    printf("ac = %d\n\n", ac);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		printf("ft_strlen(av[%d]) = %d\n",i, ft_strlen(av[i]));

		arr[i].str = av[i];
		printf("av[i] = %s\n",av[i]);

		arr[i].copy = ft_strdup(av[i]);
		printf("ft_strdup(av[i]) = %s\n\n",ft_strdup(av[i]));
		i++;
	}
	arr[ac].str = NULL;
	return (arr);
}


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{	
		ft_putchar(nb + '0');
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stock_str	*stock;

	if (argc <= 1)
	{
		write(1, "Usage: ./program_name string1 string2 ...", 40);
		return (1);
	}

	stock = ft_strs_to_tab(argc, argv);
	ft_show_tab(stock);

	// Free the allocated memory (assuming you have a function to do that)
	// Remember to free the copy field for each element as well.
	
	free(stock);

	return (0);
}/*

*/