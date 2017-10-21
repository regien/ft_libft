/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 20:32:21 by regien            #+#    #+#             */
/*   Updated: 2017/10/20 20:48:20 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	len;
	int	i;
	char	*holder;
	
	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if(!(holder = (char *)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	while (holder[i])
	{
		holder[i] = f(i, s[i]);
		i++;
	}
	holder[i] = '\0';
	return (holder);
}
