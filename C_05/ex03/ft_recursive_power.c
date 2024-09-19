/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 21:29:38 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/19 14:15:32 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else if (power == 0 && nb != 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
