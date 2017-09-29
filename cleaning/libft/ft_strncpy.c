/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 02:10:10 by gmalpart          #+#    #+#             */
/*   Updated: 2017/09/29 02:10:13 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
