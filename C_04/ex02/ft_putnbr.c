/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:34:58 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/19 13:42:18 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	n;
	char	sign;
	char	zero ;

	zero = '0';
	sign = '-';
	if (nb < 0)
	{
		write(1, &sign, 1);
		if (nb == -2147483648)
		{
			write (1, "2147483648", 10);
			return ;
		}
		nb = nb * -1;
	}
	if (nb == 0)
	{
		write (1, &zero, 1);
		return ;
	}
	n = (nb % 10) + '0';
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	write(1, &n, 1);
}
