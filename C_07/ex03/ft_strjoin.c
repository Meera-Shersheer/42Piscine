/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:06:33 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/21 18:53:15 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str = str + 1;
	}
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	t;

	t = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[t] = src[i];
		i++;
		t++;
	}
	dest[t] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		t_l;
	char	*d;

	i = 0;
	t_l = 0;
	if (size == 0)
		return ("");
	while (i < size)
	{
		t_l += ft_strlen(strs[i]);
		if (i < size - 1)
			t_l += ft_strlen(sep);
		i++;
	}
	d = (char *)malloc(t_l + 1);
	i = 0;
	while (i < size)
	{
		ft_strcat(d, strs[i]);
		if (i != size - 1)
			ft_strcat(d, sep);
		i++;
	}
	return (d);
}
