#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *dest;
	int length;

	length = ft_strlen(src);
	if (!(dest = malloc((length + 1) * sizeof(char))))
		return (NULL);
	dest[length] = '\0';
	while (length >= 0)
	{
		dest[length] = src[length];
		length --;
	}
	return (dest);
}

int	main(void)
{
	char	*string;
	char	*copied;

	string = "HelloWorld";
	copied = ft_strdup(string);
	printf("%s", copied);
	free(copied);
}

