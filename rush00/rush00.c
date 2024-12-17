/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:17:01 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/10/20 11:59:32 by tovicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	condition(char row, char col, char x, char y)
{
	if ((row == '1' && col == '1')
		|| (row == '1' && col == x)
		|| (row == y && col == '1')
		|| (row == y && col == x))
	{
		ft_putchar('o');
	}
	else if (col == '1' || col == x)
	{
		ft_putchar('|');
	}
	else if (row != y && row != '1')
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('-');
	}
}

int	rush(int x, int y)
{
	char	col;
	char	row;

	col = '1';
	row = '1';
	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	x = x + '0';
	y = y + '0';
	while (row <= y)
	{
		while (col <= x)
		{
			condition(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		col = '1';
		row++;
	}
	return (0);
}
