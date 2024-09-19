/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:34:42 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/08 12:16:25 by mshershe         ###   ########.fr       */
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
