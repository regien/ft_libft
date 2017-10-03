/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 11:47:54 by regien            #+#    #+#             */
/*   Updated: 2017/10/02 17:22:16 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ESCENARIOS:
	
	3 posibles escenarios;
	0 = no hay ningun palabra en el array entonces retorna NULL
	1 = solo hay espacios blancos al comienzo
	2 = hay espacios blancos en ambos lados

*/

char	*ft_strtrim(char const *s)
{
	int	i;
	int	escenario;

	escenario = 0;
	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == ' ' && s[i] == '\n' && s[i] == '\t')
			i++;
		if(s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			escenario++;
			i++;
			break;
		}
		if()
	}

	
/*
	if(!s)
		return NULL;
	else
	{
		while(s[i] != '\0')
		{
			if(s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
				i++;
			
		}
	}
*/
}
