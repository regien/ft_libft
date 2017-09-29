/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 02:06:21 by gmalpart          #+#    #+#             */
/*   Updated: 2017/09/29 02:06:23 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*orfeus;

	orfeus = malloc((sizeof(char) * size) + 1);
	ft_bzero(orfeus, ft_strlen(orfeus));
	return(orfeus);
}
