/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:34:35 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/06 21:17:47 by mshershe         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	t;
	int	i;
	int	upper;

	upper = 1;
	t = ft_strlen(str);
	i = 0;
	while (i < t)
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			upper = 0;
			break ;
		}
		else
			upper = 1;
		i++;
	}
	return (upper);
}
