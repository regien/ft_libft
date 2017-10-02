/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrevert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 15:35:59 by regien            #+#    #+#             */
/*   Updated: 2017/10/01 21:09:33 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Revert every character in the string;
*/


/*
char	*ft_strrevert(const char *s1)
{
	int		len;
	int		i;
	char		*temp;

	i = 0;
	temp = malloc((sizeof(char) * ft_strlen(s1)) + 1);
	temp = "123"
//	temp = "sky";
//	ft_putstr(temp);
//	ft_trcpy(temp, s1);
	len = ft_strlen(s1);
	ft_bzero(temp, len);
	ft_putnbr(ft_strlen(s1));
	ft_putstr("\n");
	while (len > 0)
//	while (temp[i] != '\0')
	{
		ft_putstr("llegue\n");
		temp[i] = s1[len];
		i++;
		len--;
		ft_putnbr(len);
		ft_putstr("\n");
		ft_putnbr(i);
		ft_putstr("\n");
	}
	ft_putstr("termine\n");
	ft_putstr(temp);
	return (temp);
}
*/

char	*ft_strrevert(char *s1)
{
	char	*mom;
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s1);
	mom = malloc((sizeof(char) * ft_strlen(s1)) +1);
	ft_strcpy(mom, s1);
	ft_putstr(mom);
	ft_putstr("\n");
	while(len > 0)
	{
//		s1[i] = mom[len];
		mom[i] = 'a';
		ft_putchar(s1[len]);
		ft_putstr("\n");
//		ft_putchar(mom[len]);
//		ft_putstr("\n");
		i++;
		len--;
	}
	ft_putstr(mom);
	ft_putstr("\n");
//	s1 = mom;
//	ft_strcpy(s1, mom);
//	free(mom);
//	ft_putstr("termine\n");
	return (s1);
}
