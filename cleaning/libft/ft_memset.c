#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *pop;
	
	pop = s;
	while (n > 0)
	{
		*pop = c;
		pop++;
		n--;
	}
	return(s);
}
