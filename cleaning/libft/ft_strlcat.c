/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 18:56:57 by regien            #+#    #+#             */
/*   Updated: 2017/10/08 15:00:57 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	
	len = 0;
	while(dst[len] && (len < size))
		len++;
	i = len;
	while (src[len - 1] && len + 1 < size)
	{
		dst[len] = src[len - 1];
		len++;
	}
	if (i < size)
		dst[len] = '\0';
	return (1 + ft_strlen(src));
}
