/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:27:13 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/05 19:43:25 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *temp, int *tab, int *rev)
{
	*temp = *tab;
	*tab = *rev;
	*rev = *temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*temp;
	int	n;
	int	*rev;
	int	a;
	int	j;

	temp = &a;
	n = 0;
	while (n < (size - 1))
	{
		rev = tab + 1;
		j = 0;
		while (j < size - n - 1)
		{
			if (*rev < *tab)
			{
				swap(temp, tab, rev);
			}
			rev++;
			tab++;
			j++;
		}
		tab = tab - size + n + 1;
		n++;
	}
}
