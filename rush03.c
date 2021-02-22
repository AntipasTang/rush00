/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlim <mlim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:00:05 by mlim              #+#    #+#             */
/*   Updated: 2021/02/21 14:54:58 by zyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_others(int horizontal, int x, int y, int vertical)
{
	if ((horizontal == 0) || (horizontal == x - 1))
	{
		ft_putchar('B');
	}
	else if ((vertical == 0) || (vertical == y - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	find_edges(int horizontal, int x, int y, int vertical)
{
	if ((vertical == 0) && (horizontal == 0))
	{
		ft_putchar('A');
	}
	else if ((vertical == 0) && (horizontal == x - 1))
	{
		ft_putchar('C');
	}
	else if ((vertical == y - 1) && (horizontal == 0))
	{
		ft_putchar('A');
	}
	else if ((vertical == y - 1) && (horizontal == x - 1))
	{
		ft_putchar('C');
	}
	else
	{
		print_others(horizontal, x, y, vertical);
	}
}

void	rush(int x, int y)
{
	int horizontal;
	int vertical;

	if ((x > 0) && (y > 0))
	{
		vertical = 0;
		while (vertical < y)
		{
			horizontal = 0;
			while (horizontal < x)
			{
				find_edges(horizontal, x, y, vertical);
				horizontal++;
			}
			ft_putchar('\n');
			vertical++;
		}
	}
}
