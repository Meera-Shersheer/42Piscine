/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:27:49 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/19 14:10:58 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else if (power == 0 && nb != 0)
		return (1);
	else
	{
		while (power > 0)
		{
			n *= nb;
			power -= 1;
		}
		return (n);
	}
}
