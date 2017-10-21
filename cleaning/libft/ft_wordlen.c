/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 01:56:27 by regien            #+#    #+#             */
/*   Updated: 2017/10/16 02:22:24 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wordlen(const char *str, int n)
{
	int		i;
	size_t		len;

	i = 0;
	len = 0;
	while (str[i] == n)
		i++;
	while (str[i] != n && str[i])
	{
		i++;
		len++;
	}
	return (len);
}
