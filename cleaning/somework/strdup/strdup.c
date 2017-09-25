/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 11:16:29 by gmalpart          #+#    #+#             */
/*   Updated: 2017/09/20 16:52:43 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int d;
	d = 0;
	while (str[d])
	{
		ft_putchar(str[d]);
		d++;
	}
}

size_t	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
	{
		i++;
	}
	return dest;
}

char	*ft_strncpy(char *dest, char *src, size_t len)
{
	unsigned long i;
	int b;
	
	i = 0;
	b = 0;
	while ((dest[i] = src[b]) != '\0' && i < len)
	{
		i++;
		b++;
	}
	while ((ft_strlen(src) <= ft_strlen(dest)) && i < len)
	{
		dest[i] = src[b];
		i++;
	}
	return (dest);
}

char *ft_strdup(char *s1)
{
	char *d;

	d = malloc(ft_strlen(s1) + 1);
	if (d == '\0')
		return (0);
	ft_strcpy(d, s1);
	return d;
}

void	ft_bzero(void *s, size_t n)
{
	
}

/*void *ft_memset(void *b, int c, size_t len)
{
	
}
*/

int main (void)
{
	char new[100] = "01345678912345678456123458564132456865456";
	ft_putstr(ft_strcpy(new, "testing for the win\n"));
	char black[20];
	char sup[20] = "sup man\n";
	ft_putstr(ft_strncpy(black, sup, 20));
	
	char src[25];
	char dest[35];
	ft_putstr(ft_strcpy(src, "something in the ocean\n"));
	ft_putstr(ft_strncpy(dest, src, 35));

	char pop[25] = "dummytest1\n";
	ft_putstr(pop);
	ft_putstr(ft_strdup(pop));
	ft_putstr(strdup(pop));
	return (0);
	

}
