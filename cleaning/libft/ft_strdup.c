/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 02:09:49 by gmalpart          #+#    #+#             */
/*   Updated: 2017/09/29 02:10:00 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;

	temp = malloc((sizeof(char) * ft_strlen(s1)) +1);
	ft_strcpy(temp, s1);
	return(temp);
}
