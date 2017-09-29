/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 02:09:39 by gmalpart          #+#    #+#             */
/*   Updated: 2017/09/29 02:09:42 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
	{
		i++;
	}
	return dest;
}
