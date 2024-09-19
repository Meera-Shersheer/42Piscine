/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:26:12 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/21 18:18:47 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ar;

	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		ar = (int *)malloc((max - min) * 4);
		if (ar == NULL)
			return (-1);
		i = 0;
		while (min < max)
		{
			ar[i] = min;
			i++;
			min++;
		}
		*range = ar;
		return (i);
	}
}
