/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:57:21 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/19 15:02:04 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	odd;
	int	counter;

	odd = 1;
	counter = 0;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			nb -= odd;
			odd += 2;
			counter++;
		}
		if (nb == 0)
			return (counter);
		if (nb < 0)
			return (0);
		return (0);
	}
}
