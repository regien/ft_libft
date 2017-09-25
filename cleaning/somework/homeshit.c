/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   homeshit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <gmalpart@estudent.42.us.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:27:51 by gmalpart          #+#    #+#             */
/*   Updated: 2017/09/19 19:29:07 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *st)
{
	int a;

	a = 0;
	while(st[a] != '\0')
	{
		ft_putchar(st[a]);
		a++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	while (str != '\0')
		i++;
	return(i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int b;

	b = 0;
	if(src[0] == '\0')
		return (0);
	else
	{
		while(src[b] != '\0')
		{
			dest[b] == 
		}
	}	
}

int main (int argc, char **argv)
{
	ft_putstr("memelord");
}
