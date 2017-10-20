/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 02:06:21 by gmalpart          #+#    #+#             */
/*   Updated: 2017/10/20 00:54:33 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*opt;

	opt = NULL;
	if (size)
	{
		if(!(opt = malloc(sizeof(unsigned char) * size)))
			return (NULL);
		while (size)
		{
			opt[--size] = 0;
		}
	}
	return ((void*)opt);
}
