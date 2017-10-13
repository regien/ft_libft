/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:00:24 by regien            #+#    #+#             */
/*   Updated: 2017/10/12 18:09:51 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *litle, size_t len)
{
	size_t	i;
	size_t	d;

	if (!litle[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + d] == litle[d] && litle[d] && (i + d) < len)
			d++;
		if (!litle[d])
			return ((char *)(big + i));
		d = 0;
		i++;
	}
	return (NULL);
}
