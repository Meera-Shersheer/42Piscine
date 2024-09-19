/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:47:11 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/06 15:41:57 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab( int *tab, int size )
{
	int	*temp;
	int	n;
	int	*rev;
	int	a;

	temp = &a;
	n = 0;
	rev = tab + size - n - 1 ;
	while (n < (size / 2))
	{
		*temp = *tab;
		*tab = *rev;
		*rev = *temp;
		tab = tab + 1;
		rev = rev - 1;
		n++;
	}
}
