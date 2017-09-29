#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*rushb;
	unsigned char	*sauce;
	size_t			b;

	sauce = (unsigned char *)src;
	rushb = (unsigned char *)dest;
	b = 0;

	if (sauce < rushb)
	{
		while(n > 0)
		{
			rushb[n] = sauce[n];
			n--;
		}
	}
	else
	{
		while(b < n)
		{
			rushb[b] = sauce[b];
			b++;
		}
	}
	return (dest);
}
