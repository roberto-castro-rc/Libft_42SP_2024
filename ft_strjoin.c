#include "libft.h"
#include "stdio.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	char *newstr;
	size_t i;

	i = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(i * sizeof(char) + 1);
	if(!newstr)
		return (NULL);
	newstr[i] = '\0';
	while(*s1 != '\0')
		*newstr++ = *s1++;
	while (*s2 != '\0')
		*newstr++ = *s2++;
	return newstr - i;
}


// int main()
// {
// 	char *s1 = "";
// 	char *s2 = "";
// 	printf("%s\n\n", ft_strjoin(s1, s2));
// }