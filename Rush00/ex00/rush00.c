/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:48:19 by maramada          #+#    #+#             */
/*   Updated: 2024/05/03 17:35:24 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	printhorizontal(int i, char a, char b, char c)
{
	int	d;

	d = 1;
	ft_putchar(a);
	while (d < (i - 1))
	{
		ft_putchar(b);
		d++;
	}
	if (i > 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	printvertical(int r, int c)
{
	int	a;

	a = 0;
	while (a < r)
	{
		if (a == 0)
		{
			printhorizontal (c, 'o', '-', 'o');
			a++;
		}
		while (a < (r - 1))
		{
			printhorizontal (c, '|', ' ', '|');
			a++;
		}
		if (a == (r - 1))
		{
			printhorizontal (c, 'o', '-', 'o');
			a++;
		}
	}
}

void	rush(int c, int r)
{
	if (c < 0 || r < 0)
		write(1, "Please enter a positive number ", 31);
	else
	{
		printvertical(r, c);
	}
}
