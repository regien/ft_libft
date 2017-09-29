#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;
	
	temp = malloc((sizeof(char) * ft_strlen(s1)) +1);
	ft_strcpy(temp, s1);
	return(temp);
}
