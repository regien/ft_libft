/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 18:51:57 by regien            #+#    #+#             */
/*   Updated: 2017/10/20 01:58:06 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates memory and returns an array of "fresh" string
**	with no spaces( ' ' / '\n' / '\t') at the begining and
**	the end, if not gives you NULL
 */


size_t	get_x(char const *s1)
{
	size_t	i;

	i = 0;
	while(s1[i] != '\0')
	{
		if(s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t')
			i++;
		if(s1[i] != ' ' && s1[i] != '\n' && s1[i] != '\t' \
				&& s1[i] != '\0')
			break;
	}
	return (i);
}

size_t	get_y(char const *s2)
{
	size_t	i;

	i = (ft_strlen(s2) - 1);
	while(i > 0)
	{
		if(s2[i] == ' ' || s2[i] == '\n' || s2[i] == '\t')
			i--;
		if(s2[i] != ' ' && s2[i] != '\n' && s2[i] != '\t' \
				&& s2[i] != '\0')
			break;
	}
	return(i);
}

char	*ft_strtrim(char const *s)
{
	size_t	x;
	size_t	y;
	size_t	cont;

	if (!s)
		return (NULL);
	cont = 0;
	x = get_x(s);
	y = get_y(s);
	if (x != ft_strlen(s) || y != 0)
	{
		char	*tempstr;
		
		if (!(tempstr = malloc((sizeof(char) * (y - x)) + 1)))
			return (0);
		while(x <= y)
		{
			tempstr[cont] = s[x];
			x++;
			cont++;
		}
		tempstr[cont] = '\0';
		return(tempstr);
	}
	return (NULL);
}
