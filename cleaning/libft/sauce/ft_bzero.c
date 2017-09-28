#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *poi;
	
	poi = s;
	while (n > 0)
	{
		*poi = 0;
		poi++;
		n--;
	}
}
