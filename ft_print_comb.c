#include "libft.c"

void ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	while (d1 <= '7')
	{
		d2 = d1 + 1;
		while (d2 <= '8')
		{
			d3 = d2 + 1;
			while (d3 <= '9')
			{
				ft_putchar(d1);
				ft_putchar(d2);
				ft_putchar(d3);
				if (!(d1 == '7' && d2 == '8' && d3 == '9'))
					write(1, ", ", 2);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
