#include "libft.c"

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 'a';
	while (letter <= 'z')
		ft_putchar(letter++);
}
