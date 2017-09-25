/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:30:02 by regien            #+#    #+#             */
/*   Updated: 2017/09/25 06:36:14 by gmalpart         ###   ########.fr       */
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

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

char	*ft_strcpy(char *dest, const char *src)
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
	if (*ap || ap)
		return (0);
	free(*ap);
	*ap = NULL;
	return (0);
}

char	*ft_strnew(size_t size)
{
	char	*ending;

//	if ((size_t *)size < 0)
//		return(NULL);
	ending = malloc((sizeof(unsigned char) * size) + 1);
	ft_bzero(ending, size);
	return(ending);
}


//OVERLAP MEMORY
void	*jaleman_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*udst;
	unsigned char	*usrc;

	i = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	while (i < n)
	{
		udst[i] = usrc[i];
		i += 1;
	}
	return (dst);
}

//ITOA

/*
char  *ft_itoa(int n)
{
	char	*something;
	
	if ()
	
}
*/

// STRDUP
char	*ft_strdup(const char *s1)
{
	char	*temp;
	
	temp = malloc((sizeof(char) * ft_strlen(s1)) +1);
	ft_strcpy(temp, s1);
	return(temp);
}

//GERARDO'S VERSION WORK SIMILAR TO MEMMOVE / might be used in memmove
//Delete comments in the clean version
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*rushb;
	unsigned char	*sauce;
	size_t			b;

	sauce = (unsigned char *)src;
	rushb = (unsigned char *)dest;
	b = 0;

	if (sauce < rushb)
	{
		while(n > 0)
		{
			rushb[n] = sauce[n];
			n--;
		}
//		ft_putstr("if\n");
	}
	else
	{
		while(b < n)
		{
			rushb[b] = sauce[b];
			b++;
		}
//		ft_putstr("else\n");
	}
	return (dest);
}

// TIENES QUE HACER ITOA, el prototipo va a comparar con una unidad del array

/*void	ft_memccpy()
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

	char *imprimeme;
	imprimeme = malloc((sizeof(char) * 6) + 1);
	imprimeme = "012345";
	printf("imprimeme = %s\n", imprimeme);
//	ft_memdel(*imprimeme);
	printf("imprimeme = %s\nfailed try\n", imprimeme);

// STRNEW
	printf("\n\nSTRNEWTEST\n\n");

	ft_putstr(ft_strnew(5));
//	printf("imprimeme = %s\n", );


// MEMCPY
//	this function doesnt care about overlapping (CHECK THE MAN)
//	is this function is used and overlap use memmove lol
	printf("\n\nMEMCPYTEST\n\n");
	char fed[30] = "01234567890123456789012345678";
//	fed = malloc(sizeof(char) * 40);
	ft_putstr("pendejadas dest + 5, sauce +1\n");
	memcpy(fed+5, fed+1, 10);
	printf("fed = \t\t%s\n", fed);
	//jaleman
	strcpy(fed ,"01234567890123456789012345678");
	jaleman_memcpy(fed+5, fed+1, 10);
	printf("jaleman = \t%s\n", fed);
	//insert own mmcpy
	strcpy(fed ,"01234567890123456789012345678");
	ft_memcpy(fed+5, fed+1, 10);
	printf("mytest = \t%s\n", fed);
	//insert another own mmcpy
	strcpy(fed ,"01234567890123456789012345678");
	ft_memcpy(fed+6, fed+4, 10);
	printf("mytest2 = \t%s\n", fed);
	strcpy(fed ,"01234567890123456789012345678");
	printf("realfed = \t%s\n", fed);

	printf("\n");

	
	// MEMCCPY
	// in order to continue you must do itoa
	printf("\n\nMEMCCPYTEST\n\n");
	char *classy;
	classy = malloc((sizeof(char) * 30) + 1);
	ft_strcpy(classy,"012345678901234567890123456789");
	printf("realclassy =\t\t%s\n", classy);

	//firsttest
	ft_strcpy(classy,"012345678901234567890123456789");
	memccpy(classy+8, classy+20, '5', 10);
	ft_putstr("pendejadas\n");
	printf("firsttest = \t\t%s\n", classy);
	//secondtest
	ft_strcpy(classy,"012345678901234567890123456789");
	ft_strcpy(classy,"oracion de tres partes, prueba");
	printf("realsecondtest = \t%s\n", classy);
	memccpy(classy+10, classy+20, 'p', 20);
	printf("secondtest = \t\t%s\n", classy);

// ITOA
/*	printf("\n\nITOATEST\n\n");
	char	*tesu;
	int		uri = 45;
	tesu = malloc(sizeof(char) * 40);
	strcpy(tesu, "pruebapruebapruebapruebapruebaprueba");
	printf("%s\n", tesu);
	ft_putnbr(uri);
*/


// STRDUP
	printf("\n\nSTRDUPTEST\n\n");
//test 1
	char	*teod;
	teod = malloc(sizeof(char));
	teod = strdup("test 1 =\tpendejada de funcion\n");
	ft_putstr(teod);
//test 2
	char	*dunt;
	dunt = malloc(sizeof(char));
	dunt = strdup("");
	ft_putstr(dunt);
//test 3
	char	*lest;
	lest = malloc(sizeof(char));
	lest = ft_strdup("my test =\tpendejada de funcion\n");
	ft_putstr(lest);
//test 4
	char	*diffe;
	diffe = malloc(sizeof(char));
	diffe = ft_strdup('\0');
	ft_putstr(diffe);

}
