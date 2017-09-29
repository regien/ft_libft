#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ending;

	ending = malloc((sizeof(unsigned char) * size) + 1);
	ft_bzero(ending, size);
	return(ending);
}
