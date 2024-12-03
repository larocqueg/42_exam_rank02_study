/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <unistd.h>


int		ft_atoi(char *s);
int		ft_is_prime(int nb);
void	put_nbr(int n);
void	ft_putchar(char c);

int main(int ac, char **av)
{

	if (ac == 2)
	{
		int	nbr = ft_atoi(av[1]);
		int	sum = 0;

		while (nbr > 0)
		{
			if (ft_is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('0');
	ft_putchar('\n');
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	res = 0;

	while (*str)
		res = res * 10 + *str++ - 48;
	return (res);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	ft_putchar(n % 10 + '0');
}
