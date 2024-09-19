/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:15:52 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/14 20:05:16 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	t;

	t = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < size && i < t)
	{
		dest[t] = src[i];
		i++;
		t++;
	}
	dest[t] = '\0';
	return (t - 1);
}
