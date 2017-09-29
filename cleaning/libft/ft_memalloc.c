#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*orfeus;

	orfeus = malloc((sizeof(char) * size) + 1);
	ft_bzero(orfeus, ft_strlen(orfeus));
	return(orfeus);
}
