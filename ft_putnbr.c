#include <unistd.h>

void	ft_putnbr(int n)
{
	int		i;
	char	str[10];

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (n / 10 != 0)
	{
		str[i++] = (n % 10) + '0';
		n = n / 10;
	}
	str[i] = n + '0';
	while (i >= 0)
	{
		write(1, str + i, 1);
		--i;
	}
}
