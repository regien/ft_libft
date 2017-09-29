#include "libft.h"

void	*ft_memdel(void **ap)
{
	if (*ap || ap)
		return (0);
	free(*ap);
	*ap = NULL;
	return (0);
}
