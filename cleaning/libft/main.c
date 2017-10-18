/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 16:03:44 by regien            #+#    #+#             */
/*   Updated: 2017/10/16 00:30:23 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_countc(const char *str, char c)
{
	int word_count;
	int i;
	int has_word;

	if (!str || !c)
		return (0);
	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		has_word = 0;
		while (c == str[i] && str[i])
			i++;
		while (c != str[i] && str[i])
		{
			has_word = 1;
			i++;
		}
		while (c == str[i] && str[i])
			i++;
		if (has_word == 1)
			word_count++;
	}
	return (word_count);
}

static int		ft_word_sizec(const char *str, char c)
{
	int i;

	if (!str || !c)
		return (0);
	i = 0;
	while (c == str[i] && str[i] != '\0')
		str++;
	while (c != str[i] && str[i] != '\0')
		i++;
	return (i);
}

char			**ft_strsplit(const char *str, char c)
{
	int		word_count;
	int		words_entered;
	int		i;
	char	**words;
	char	*word;

	i = 0;
	words_entered = 0;
	word_count = ft_word_countc(str, c);
	words = (char**)malloc(sizeof(char*) * (word_count + 1));
	while (words_entered < word_count)
	{
		word = (char*)malloc(sizeof(char) * (ft_word_sizec(str, c) + 1));
		if (!word || !words)
			return (NULL);
		while (c == str[0] && str[0])
			str++;
		while (c != str[0] && str[0])
			word[i++] = *str++;
		word[i] = '\0';
		words[words_entered++] = word;
		i = 0;
	}
	words[word_count] = 0;
	return (words);
}


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


	// STRLEN
	printf("\n\nSTRLEN\n\n");
	ft_putstr("oracion =\t pendejadas\n");
	ft_putnbr(ft_strlen("pendejadas"));
	ft_putstr("\n");
	ft_putnbr(strlen("pendejadas"));
	ft_putstr("\n");

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

	// STRTRIM
	printf("\n\nSTRTRIM\n\n");
	ft_putstr("testing ft_strtrim: \t|");
	ft_putstr(ft_strtrim("   hold on bitch    "));
	ft_putstr("|\n");
	ft_putstr("testing ft_strtrim: \t|");
	ft_putstr(ft_strtrim("             h             "));
	ft_putstr("|\n");
	ft_putstr("testing ft_strtrim: \t|");
	//	ft_putstr(ft_strtrim("                      "));
	ft_putstr("|\n");
	ft_putstr("if none appears your shit is wrong motherfucker\n");

	// STRSPLIT
	printf("\n\nSTRSPLIT\n\n");
	ft_putstr("jaleman examples:\t");
	char	**fenix = ft_strsplit("*****nigger*of*death", '*');
	ft_putstr(fenix[0]);
	ft_putstr("|\n");
	ft_putstr(fenix[1]);
	ft_putstr("|\n");
	ft_putstr(fenix[2]);
	ft_putstr("|\n");
	ft_putstr("^^something is suposse to happen above me.\n");


	// NRBLEN
	// incompleto ?
	printf("\n\nNBRLEN TEST\n\n");
	//	ft_putstr("");
	//	ft_putstr(ft_nbrlen());


	// ITOA
	printf("\n\nITOA TEST\n\n");
	ft_putstr("valor de las pendejadas : -4562\n");
	ft_putstr("my itoa test :");
	ft_putstr(ft_itoa(-4562));
	ft_putstr("\n4582 :");
	ft_putstr(ft_itoa(4582));
	ft_putstr("\n2147483647 :");
	ft_putstr(ft_itoa(2147483641));
	ft_putstr("\n-2147483648");
	ft_putstr(ft_itoa(-2147483648));
	ft_putstr("\n-58796:");
	ft_putstr(ft_itoa(-587496));
	ft_putstr("\nno tengo contra que testearlo asi que porfavor\n imprime pendejada\n");


	// FREE
	printf("\n\nFREE TEST\n\n");
	char	*stuff;
	stuff = malloc(sizeof(char) * 5);
	ft_strcpy(stuff, "01234");
	printf("my stuff: %s \n", stuff);
	free(stuff);
	stuff = malloc(sizeof(char) * 5);
	ft_strcpy(stuff, "04321");
	printf("my stuff: %s \n", stuff);

	// STRLCAT
	printf("\n\nSTRLCAT TEST\n\n");
	//	dunno why this function is not even in the real library
	//	try to cast this in a mac ^ & install hackintosh
	//	ft_putnbr(strlcat("pendejadas", "pendejadas", 5));
	//	ft_putstr("\n");
	ft_putnbr(ft_strlcat("pendejadas", "pendejadas", 5));
	ft_putstr("\n");

	// STRSTR
	printf("\n\nSTRSTR TEST\n\n");
	ft_putstr("strstr:\t");
	ft_putstr(strstr("qewadszcxpendejadas.com", "pen"));
	ft_putstr("\n");
	ft_putstr("my own strstr:\t");
	ft_putstr(strstr("qewadszcxpendejadas.com", "pen"));
	ft_putstr("\n");

	// STRCMP
	printf("\n\nSTRCMP TEST\n\n");
	ft_putstr("my own strcmp =\t");
	ft_putnbr(ft_strcmp("pastrana", ""));
	ft_putstr("\n");
	ft_putstr("strcmp =\t");
	ft_putnbr(strcmp("pastrana", ""));
	ft_putstr("\n");

	printf("\n\nSTRCMP TEST\n\n");
	ft_putstr("my own strncmp =\t");
	ft_putnbr(ft_strncmp("pastrana", "pst", 3));
	ft_putstr("\n");
	ft_putstr("strncmp =\t");
	ft_putnbr(strncmp("pastrana", "pst", 3));
	ft_putstr("\n");

	// STRCAT
	printf("\n\nSTRCAT TEST\n\n");
	//	ft_putstr(ft_strcat("pendejadas", "pendejadas"));
	ft_putstr("\n");

	// ITOA BASE
	printf("\n\nITOABASE TEST\n\n");
	ft_putstr("JALEMAN VERSION:\n");
/*	ft_putstr(ft_jaleitoa_base(4585, 8));
	ft_putchar('\n');
	ft_putstr(ft_jaleitoa_base(-4585, 9));
	ft_putchar('\n');
	ft_putstr(ft_jaleitoa_base(4585, 10));
	ft_putchar('\n');
	ft_putstr(ft_jaleitoa_base(4585, 11));
	ft_putchar('\n');
	ft_putstr(ft_jaleitoa_base(-4585, 12));
	ft_putchar('\n');
	ft_putstr(ft_jaleitoa_base(4585, 13));
	ft_putchar('\n');
	ft_putstr(ft_jaleitoa_base(4585, 14));
	ft_putchar('\n');
	ft_putstr(ft_jaleitoa_base(4585, 15));
	ft_putchar('\n');
	ft_putstr(ft_jaleitoa_base(-4568, 12));
*/	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr("MY VERSION:\n");
	ft_putstr(ft_itoa_base(4585, 8));
	ft_putchar('\n');
	ft_putstr(ft_itoa_base(-4585, 9));
	ft_putchar('\n');
	ft_putstr(ft_itoa_base(4585, 10));
	ft_putchar('\n');
	ft_putstr(ft_itoa_base(4585, 11));
	ft_putchar('\n');
	ft_putstr(ft_itoa_base(-4585, 12));
	ft_putchar('\n');
	ft_putstr(ft_itoa_base(4585, 13));
	ft_putchar('\n');
	ft_putstr(ft_itoa_base(4585, 14));
	ft_putchar('\n');
	ft_putstr(ft_itoa_base(4585, 15));
	ft_putchar('\n');
	ft_putstr(ft_itoa_base(-4568, 12));
	ft_putchar('\n');

	// FILL MEE

}
