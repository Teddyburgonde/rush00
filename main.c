/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:00:08 by tebandam          #+#    #+#             */
/*   Updated: 2024/05/18 15:09:50 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	write_first_and_last_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
}

void	write_mid_line(int x)
{
	int	i;

	ft_putchar('|');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('|');
	
}

void	rush(int x, int y)
{	
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	if (x > 2147483647 || y > 2147483647)
		return ;
	if (x == 1 && y == 1)
	{
		write (1, "o\n", 2);
		return ;
	}
	if (x == 1)
	{
		write (1, "o", 1);
		j = 0;
		while (j < y - 2)
		{
			ft_putchar('\n');
			ft_putchar('|');
			j++;
		}
		ft_putchar('\n');
		write (1, "o\n", 2);
		return ;
	}
	write_first_and_last_line(x);
	ft_putchar('\n');
	while (j < y - 2)
	{
		write_mid_line(x);
		ft_putchar('\n');
		j++;
	}
	if (y != 1)
	{
		write_first_and_last_line(x);
		ft_putchar('\n');
	}
}
int	main()
{
	rush(5, 5);
	return (0);
}