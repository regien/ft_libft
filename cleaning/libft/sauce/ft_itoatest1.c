/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 15:19:59 by regien            #+#    #+#             */
/*   Updated: 2017/10/05 15:18:06 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//this can be a function
//specially useful when you are writing itoa base
size_t		ft_nbrlen(int nbr, int base)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		return(1);
	if (nbr < 0 && base == 10)
		len++;
	while (nbr)
	{
		nbr = nbr / base;
		len++;
	}
	return(len);
}

//this shit is base 10
size_t		ft_nbrlenreg(int nbr)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return(len);
}

char	*ft_itoa(int n)
{
	size_t	negative;
	char	*holder;
//	int	i;
	size_t	len;

//	i = 0;
	negative = 0;
	len = ft_nbrlen(n, 10);
//	if(n < 0)
//		negative = 1;
	holder = malloc(sizeof(char) * (ft_nbrlen(n, 10) + 1));
	holder[ft_strlen(holder)] = '\0';
//	len = ft_strlen(holder) - 1;
	while(len >= 0)
//	while(holder[i] != '\0')
	{
		if (negative == 1 && len == 0 )
		{
			holder[len] = '-';
			len--;
		}
		if (len > 1)
		{
			holder[len] = ((n % 10) + '0');
			n = n / 10;
			len--;
		}
	}
	return(holder);
}
