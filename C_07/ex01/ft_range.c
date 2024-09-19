/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:45:23 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/21 18:17:22 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (max - min <= 0)
	{
		arr = 0;
		return (arr);
	}
	else
	{
		arr = (int *)malloc((max - min) * 4);
		i = 0;
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
		return (arr);
	}
}
