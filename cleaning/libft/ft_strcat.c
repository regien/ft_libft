/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 02:31:38 by gmalpart          #+#    #+#             */
/*   Updated: 2017/10/07 15:44:03 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strcat(char *dst,const char *src)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(dst);
	i = 0;
	while(src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return(dst);
}
