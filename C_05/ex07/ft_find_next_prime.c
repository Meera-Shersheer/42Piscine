/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:02:34 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/19 14:56:06 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = nb - 1;
	if (nb <= 1)
		return (0);
	else
	{
		while (n > 1)
		{
			if (nb % n == 0)
				return (0);
			n--;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!ft_is_prime(nb))
			nb++;
		return (nb);
	}
}
