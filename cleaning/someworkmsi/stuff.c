/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stuff.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:30:02 by regien            #+#    #+#             */
/*   Updated: 2017/09/23 17:34:10 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>


void	ft_putchar(int b)
{
	write(1, &b, 1);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *pop;
	
	pop = s;
	while (n > 0)
	{
		*pop = c;
		pop++;
		n--;
	}
	return(s);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char *poi;
	
	poi = s;
	while (n > 0)
	{
		*poi = 0;
		poi++;
		n--;
	}
}

/*
void	*memcpy(void *dest, const void *src, size_t n)
{
	
}
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	
}

int main(void)
{
	int d = 0;
	int e = 0;
	int o = 0;
	char *i;
	i = malloc(sizeof(int) * 5);
	memset(i, 10, sizeof(char) * 5);
	while(d <= 5)
	{
		printf("%i\n", i[d]);
		d++;
	}
	char *h;
	h = malloc(sizeof(char) * 5);
	ft_memset(h, 10, sizeof(char) * 5);
	while(e <= 5)
	{
		printf("%i\n", h[e]);
		e++;
	}
	char k[20] = "imprimeme";
	printf("llego> %s\n", k);
	ft_bzero(k, sizeof(char) * 2);
	printf("llego> %s\n", k);
	while(o <= 5)
	{
		ft_putchar(k[o]);
		o++;
	}
	printf("\n");

//	MEMMOVE
	printf("\n\nMEMOVE\n\n");
	char *soroch;
	soroch = malloc(sizeof(char) * 31);
	soroch = "012345678901234567890123456789";
	memmove(soroch[10], soroch[20]);
	printf();


}
