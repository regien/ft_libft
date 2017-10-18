/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 21:06:57 by regien            #+#    #+#             */
/*   Updated: 2017/10/16 04:09:56 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ok i get it, time to write my own shit
	1 = know how many words does my string has
	 ^ defined by the define character
	2 = 
 */



char	**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		d;
	char		**hol;

	i = 0;
	d = 0;
	if (!(hold = malloc(sizeof(char) * (ft_wordcount(s, c) + 1))) || s)
		return (NULL);
	
	while (i < ft_wordcount(s, c))
	{
		if (!(hol[i] = (char *)malloc(sizeof(char) * \
		(ft_wordlen(s + d, c) + 1))))
			return (NULL);
		while (s[d] == c)
			d++;
		while ()
	}
}
