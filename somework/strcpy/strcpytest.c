/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpytest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 11:16:29 by gmalpart          #+#    #+#             */
/*   Updated: 2017/09/19 20:13:32 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int d;
	d = 0;
	while (str[d])
	{
		ft_putchar(str[d]);
		d++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
	{
		i++;
	}
	return (dest);
}

int main (void)
{
	char new[100] = "01345678912345678456123458564132456865456";
	ft_putstr(ft_strcpy(new, "testing for the win\n"));
	char black[20];
	char sup[20] = "sup man\n";
	ft_putstr(ft_strcpy(black, sup));
	return (0);
}
