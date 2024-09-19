/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 21:14:23 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/19 16:56:03 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	f = 1;
	while (nb >= 1)
	{
		f *= nb;
		nb = nb - 1;
	}
	return (f);
}
