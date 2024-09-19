/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:24:23 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/14 19:30:19 by mshershe         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	s2_t;
	unsigned int	s1_t;
	unsigned int	i;

	i = 0;
	s1_t = ft_strlen(s1);
	s2_t = ft_strlen(s2);
	while ((i < s1_t || i < s2_t) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
