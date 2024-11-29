/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:11:10 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/11/29 18:11:52 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || (av[1][i] >= '\t' && av[1][i] <= '\r'))
			i++;
		if (av[1][i] == '\0')
		{
			ft_putchar('\n');
			return (1);
		}
		while ((av[1][i] >= 'A' && av[1][i] <= 'Z') ||
			(av[1][i] >= 'a' && av[1][i] <= 'z'))
		{
			ft_putchar(av[1][i++]);
			if (av[1][i] == '\0')
				break ;
		}
	}
	ft_putchar('\n');
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
