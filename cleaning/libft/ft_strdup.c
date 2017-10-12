/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 02:09:49 by gmalpart          #+#    #+#             */
/*   Updated: 2017/10/12 01:04:23 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;

	if(!(temp = malloc((sizeof(char) * ft_strlen(s1)) +1)))
		return (NULL);
	ft_strcpy(temp, s1);
	return(temp);
}
