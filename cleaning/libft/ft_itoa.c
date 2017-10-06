/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:35:00 by regien            #+#    #+#             */
/*   Updated: 2017/10/05 21:49:51 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*dothework(int n, int len)
{
	
}

size_t	nbrneg(int n)
{
	if(n < 0)
	{
		n = -n;
		return(1);
	}
	return(0);
}

char	*ft_itoa(int n)
{
	size_t	negative;
	int	len;
	char	*holder;

	len = ft_nbrlen(n, 10);
	holder = malloc(sizeof(char) * (len + 1));
	holder[len] = '\0';
	len--;
	negative = nbrneg(n);
//	if (n < 0)
//	{
//		negative = 1;
//		n = -n;
//	}
	while (len >= 0)
	{
		if (len >= 0)
		{
			holder[len] = ((n % 10) + '0');
			n = (n / 10);
			len--;
		}
		if (negative == 1 && len == 0)
		{
			holder[len] = '-';
			len--;
		}
	}
	return (holder);
}
