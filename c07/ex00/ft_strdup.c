/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:37:20 by soyekim           #+#    #+#             */
/*   Updated: 2023/09/07 14:37:22 by soyekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

/*

#include <stdio.h>
#include <string.h>
int main(void)
{
   char *string = "this is a copy";
   char *newstr;
   if ((newstr = strdup(string)) != NULL)
      printf("The new string is: %s\n", newstr);

   char *string1 = "this is a copy";
   char *newstr1;
   newstr1 = ft_strdup(string1);
   printf("The new string is: %s\n", newstr1);
}

*/