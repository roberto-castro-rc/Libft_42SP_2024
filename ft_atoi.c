#include "libft.h"

static int	ft_isspace(int c);

int ft_atoi(const char *str)
{
	int result;
	int sig;
	size_t i;

	result = 0;
	sig = 1;
	i = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (int)str[i] - '0';
		i++;
	}
	return (result * sig);
}
static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}