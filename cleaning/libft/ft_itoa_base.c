/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 20:23:03 by regien            #+#    #+#             */
/*   Updated: 2017/10/16 00:14:52 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*dtworkbase(int n, int len, char *pdj, size_t negative, int base)
{
	char	*base_string;

	base_string = "0123456789ABCDEF";
	while (len >= 0)
	{
		if (len >= 0)
		{
			pdj[len] = base_string[n % base];
			n = (n / base);
			len--;
		}
		if (negative == 1 && len == 0 && base == 10)
		{
			pdj[len] = '-';
			len--;
		}
	}
	return(pdj);
}

char	*ft_itoa_base(int n, int base)
{
	long	nbr;
	size_t	negative;
	int	len;
	char	*holder;
// N is unsigned as long as if not base 10
	if (n == 0 || base < 2 || base > 16)
		return (ft_strdup("0"));
// Base string
//	base_string = "0123456789ABC"
// change 10 - to base variable
	nbr = n;
	len = ft_nbrlen(n, base);
	if (!(holder = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	holder[len] = '\0';
	len--;
	negative = 0;
//	if (n == -2147483648 && base == 10)
//	{
//		ft_strcpy(holder, "-2147483648");
//		return(holder);
//	}
	if (nbr < 0)
	{
		nbr = -nbr;
		if (base == 10)
			negative = 1;
	}
//	if (n < 0 && base == 10)
//	{
//		negative = 1;
//		n = -n;
//	}
	holder = dtworkbase(nbr, len, holder, negative, base);
	return (holder);
}
