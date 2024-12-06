/*
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
*/

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	count;
	int	len;
	if (ac == 3)
	{
		i = 0;
		j = 0;
		count = 0;
		len = ft_strlen(av[1]);
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[2][j] == av[1][i])
				{
					j++;
					count++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (count == len)
			return (write(1, "1\n", 2));
		return (write(1, "0\n", 2));
	}
	write(1, "\n", 1);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}
