/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 16:03:44 by regien            #+#    #+#             */
/*   Updated: 2017/10/01 19:24:22 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
//	strcpy(fed ,"01234567890123456789012345678");
//	jaleman_memcpy(fed+5, fed+1, 10);
//	printf("jaleman = \t%s\n", fed);
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

// PUTENDL
	printf("\n\nPUTENDL\n\n");
	ft_putendl("esta pendejada no deberia ser considerada una funcion");

// STREQU
	printf("\n\nSTREQU\n\n");
	ft_putstr("my putnbr ~ ft_strequ =");
	ft_putnbr(ft_strequ("pendejadas", "pendejadas"));
	ft_putstr("\n");
//	ft_putstr("my putnbr ~ ft_strnequ =");
//	ft_putnbr(ft_strnequ("pendejadas", "pedejadas", 4));
// 	^^^^ UNCOMENT ME WHEN YOU ARE DONE ^^^^^

	ft_putstr("\n");

	printf("si es 1, verdadero son iguales \n sino cagado, excepto en el segundo caso");

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
//	char	*diffe;
//	diffe = malloc(sizeof(char));
//	diffe = ft_strdup('\0');
//	ft_putstr(diffe);


// STRREVERT
	printf("\n\nSTRREVERT\n\n");
	ft_putstr("the regular sentence:\tsomething in the sky\n");
	ft_putstr("my ft_strrevert test:\t");
	ft_putstr(ft_strrevert("something in the sky"));
	ft_putstr("\n");
// FILL MEE


}
