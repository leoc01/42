#include "libft.c"

void	ft_iterative_putnbr(int nb)
{
	int	div;
	int	incr;

	incr = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb++;
			incr = 1;
		}
		nb = -nb;
	}
	div = 10;
	while (nb > 9 && (nb / div) > 0)
	{
		if ((nb / div) < 10)
		{
			ft_putchar((nb / div) + '0');
			nb -= (nb / div) * div;
			div = 1;
		}
		div *= 10;
	}
	ft_putchar(nb + incr + '0');
}
