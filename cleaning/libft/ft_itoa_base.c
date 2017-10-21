/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 20:23:03 by regien            #+#    #+#             */
/*   Updated: 2017/10/21 08:54:56 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	*dtworkbase(int n, int len ,char *pdj, int base)
{
	char	*base_string;

	base_string = "0123456789ABCDEF";
	while (len >= 0)
	{
		if (len >= 0 )
		{
			pdj[len] = base_string[n % base];
			n = (n / base);
			len--;
			if (len == 0)
				if(!(pdj[0]))
					len--;
		}
//		if (len == 0 && base == 10)
//		{
//			pdj[len] = '-';
//			len--;
//		}
	}
	return(pdj);
}

char	*ft_itoa_base(int n, int base)
{
	long	nbr;
	size_t	negative;
	int	len;
	char	*holder;
	if (n == 0 || base < 2 || base > 16)
		return (ft_strdup("0"));
	nbr = n;
	len = ft_nbrlen(n, base);
	if (!(holder = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	holder[len] = '\0';
	len--;
	negative = 0;
	if (n == -2147483648 && base == 10)
		return(ft_strcpy(holder, "-2147483648"));
	if (nbr < 0)
	{
		nbr = -nbr;
		if (base == 10)
			negative = 1;
		holder[0] = '-';
	}
	holder = dtworkbase(nbr, len, holder, base);
	return (holder);
}
*/

char	*ft_itoa_base(int n, int base)
{
	long	nbr;
	int		len;
	char	*holder;
	char	*base_string;

	base_string = "0123456789ABCDEF";
	if (n == 0 || base < 2 || base > 16)
		return (ft_strdup("0"));
	nbr = n;
	len = ft_nbrlen(nbr, base);
	if (!(holder = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	holder[len] = '\0';
	if (nbr < 0)
		nbr = nbr * -1;
	while (nbr)
	{
		holder[--len] = base_string[nbr % base];
		nbr = nbr / base;
	}
	if ((n < 0) && (base == 10))
		holder[0] = '-';
	return (holder);
}
