/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:55:54 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/09 11:55:55 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_str_in_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

typedef struct s_comfort
{
	int	count;
	int	inword;
	int	i;
}	t_c;

int	countwords(char *str, char *charset)
{
	struct s_comfort	s;	

	s.count = 0;
	s.inword = 0;
	s.i = 0;
	while (str[s.i])
	{
		if (is_str_in_charset(str[s.i], charset))
			s.inword = 0;
		else if (s.inword == 0)
		{
			s.inword = 1;
			s.count++;
		}
		s.i++;
	}
	return (s.count);
}

typedef struct s_use
{
	int		wordcount;
	char	*ptr;
	char	*wordstart;
	char	**words;
	int		index;
	int		sec;
	int		wordlength;
}	t_use;

char	*makeword(char *str, char *wordstart)
{
	struct s_use	a;
	char			*temp;

	a.wordlength = str - wordstart;
	temp = (char *)malloc((a.wordlength + 1) * sizeof(char));
	if (!temp)
		return (0);
	a.sec = 0;
	while (a.sec < a.wordlength)
	{
		temp[a.sec] = wordstart[a.sec];
		a.sec++;
	}
	temp[a.sec] = '\0';
	return (temp);
}

char	**ft_split(char *str, char *charset)
{
	struct s_use	a;

	a.wordcount = countwords(str, charset);
	a.words = (char **)malloc((a.wordcount + 1) * sizeof(char *));
	if (a.words == NULL)
		return (0);
	a.index = 0;
	while (a.index < a.wordcount)
	{
		while (is_str_in_charset(*str, charset) == 1 && *str)
			str++;
		if (is_str_in_charset(*str, charset) == 0 && *str)
		{
			a.wordstart = str;
			while (is_str_in_charset(*str, charset) == 0 && *str)
				str++;
		}
		a.words[a.index] = makeword(str, a.wordstart);
		a.index++;
	}
	a.words[a.index] = NULL;
	return (a.words);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = "This        is             a sample string,split it.";
    char *charset = " ,";
    char **words = ft_split(str, charset);
    if (words == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Split words:\n");
    for (int i = 0; words[i] != NULL; i++)
    {
        printf("%s\n", words[i]);
        free(words[i]); // Free each word
    }    
    free(words);
    return 0;
}
*/