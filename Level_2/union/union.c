/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h>

int	ft_strchr(char *str, char c);

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	char	dest[256] = {0};
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (ft_strchr(dest, av[1][i]) == 0)
				dest[j++] = av[1][i];
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (ft_strchr(dest, av[2][i]) == 0)
				dest[j++] = av[2][i];
			i++;
		}
		dest[j] = '\0';
		i = 0;
		while (dest[i])
			write(1, &dest[i++], 1);
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
	return (1);
}

int	ft_strchr(char *str, char c)
{
	int	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
