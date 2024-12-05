/*
Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				write(1, &av[1][i++], 1);
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			if (av[1][i] == '\0')
				break ;
			write(1, "   ", 3);
		}
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('\n');
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
