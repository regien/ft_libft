/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 17:19:09 by regien            #+#    #+#             */
/*   Updated: 2017/10/07 17:19:11 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(dest);
	i = 0;
	while((i < n) && src[i])
	{
		dest[len + 1] = src[i];
		i++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
