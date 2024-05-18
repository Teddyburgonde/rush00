/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:00:08 by tebandam          #+#    #+#             */
/*   Updated: 2024/05/18 16:28:04 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	write_mid_line(int x);
void	write_first_and_last_line(int x);
void	rush(int x, int y);

int	main(void)
{
	rush(5, 7);
	return (0);
}
