/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 15:55:39 by regien            #+#    #+#             */
/*   Updated: 2017/10/20 03:03:48 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = -1;
	if(((unsigned char *)src) < ((unsigned char *)dest))
	{
		while (n-- > 0)
//		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
//			n--;
//		}
	}
	else
	{
		while (i++ < n)
	//	{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
//			i++;
//		}
	}
	return (((unsigned char *)dest));
}
