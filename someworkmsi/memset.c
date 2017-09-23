/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:30:02 by regien            #+#    #+#             */
/*   Updated: 2017/09/22 17:37:18 by gmalpart         ###   ########.fr       */
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
	size_t i;
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

void	*ft_memalloc(size_t size)
{
	char	*orfeus;

	orfeus = malloc((sizeof(char) * size) + 1);
	ft_bzero(orfeus, ft_strlen(orfeus));
	return(orfeus);
}

void	*ft_memdel(void **ap)
{
	unsigned char	*container;
	
	container = *ap;
	free(container);
	return (0);
}
/*
void	*memcpy(void *dest, const void *src, size_t n)
{
	
}
*/



/*
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*temp;
	unsigned char	*sauce;
	unsigned char	*poly;
	size_t	 i;

	poly = dest;
	sauce = (unsigned char *)src;
	i = 0;
	temp = malloc(sizeof(char) * len + 1);
	
	while(len > i)
	{
		(*temp++) = (*sauce++);
		i++;
	}
	printf("tu pendejada: %s\n", temp);
	return(temp);

*/



/*
	ft_strncpy(temp, sauce, len);
	strcpy(poly, temp);
	free(temp);
	return(poly);
}
*/

int main(void)
{
// MEMSET
	printf("\n\nMEMSETTEST\n\n");
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
	
// BZERO
	printf("\n\nBZEROTEST\n\n");

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
// MEMMOVE
	printf("\n\nMEMMOVETEST\n\n");

	char toth[32] = "012345678901234567890123456789\n";
	memmove(toth+5, toth+30, 10);
	printf("%s", toth);
	ft_strcpy(toth, "012345678901234567890123456789\n");
	printf("%s", toth);
//	ft_memmove(toth+5, toth+10, 10);
	printf("%s", toth);
// MEMALLOC
	printf("\n\nMEMALLOCTEST\n\n");
	char*	nisu;
	nisu = ft_memalloc(6);
	printf("nisu = %s\n", nisu);
	nisu = "012345";
	printf("nisu = %s\n", nisu);

// MEMDEL
	printf("\n\nMEMDELTEST\n\n");

	char imprimeme[6] = "012345";
	printf("imprimeme = %s\n", imprimeme);
	ft_memdel(char *imprimeme);
	printf("imprimeme = %s\n", imprimeme);




	printf("\n");
}
