/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:00:24 by regien            #+#    #+#             */
/*   Updated: 2017/10/12 15:37:30 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	d;

	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i + d] == needle[d] && needle[d])
			d++;
		if (!needle[d])
			return ((char *)(haystack + i));
		d = 0;
		i++;
	}
	return (NULL);
}
