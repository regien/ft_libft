/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 02:31:38 by gmalpart          #+#    #+#             */
/*   Updated: 2017/10/06 15:59:08 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strcat(char *dst,const char *src)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dst);
	i = 0;
	while(src[i] != '\0')
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len+1] = '\0';
	return(dst);
}


//temporarily in development

/*
char	*ft_strcat(char *dst,const char *src)
{
	char	*temp;
	
	temp = malloc(sizeof(char) * ft_strlen(dst));
	ft_strcpy(temp, dst);
	free(*dst);
	dst = malloc(sizeof(char) * ft_strlen(src) + ft_strlen(dst)
	
}
*/
