/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 02:08:48 by gmalpart          #+#    #+#             */
/*   Updated: 2017/09/29 02:08:49 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	}
	else
	{
		while(b < n)
		{
			rushb[b] = sauce[b];
			b++;
		}
	}
	return (dest);
}
