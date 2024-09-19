/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:18:47 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/13 15:37:40 by mshershe         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	s2_t;
	int	s1_t;
	int	i;

	i = 0;
	s1_t = ft_strlen(s1);
	s2_t = ft_strlen(s2);
	while (i < s1_t || i < s2_t)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i - 1] - s2[i - 1]);
}
