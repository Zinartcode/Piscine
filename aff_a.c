/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:24:24 by azinnatu          #+#    #+#             */
/*   Updated: 2017/01/29 21:14:30 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('a');
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				ft_putchar('a');
				break ;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
