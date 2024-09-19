/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:25:43 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/06 21:18:19 by mshershe         ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	t;
	int	i;
	int	lower;

	lower = 1;
	t = ft_strlen(str);
	i = 0;
	while (i < t)
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			lower = 0;
			break ;
		}
		else
			lower = 1;
		i++;
	}
	return (lower);
}
