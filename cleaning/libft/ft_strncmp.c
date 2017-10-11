/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 17:00:53 by regien            #+#    #+#             */
/*   Updated: 2017/10/08 18:35:34 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char * s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int		i;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (str1[i] == str2[i] && str1[i] && n > 0)
	{
		i++;
		n--;
	}
	return (str1[i] - str2[i]);
}
