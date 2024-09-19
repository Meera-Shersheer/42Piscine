/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:09:31 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/06 20:22:58 by mshershe         ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int	t;
	int	i;
	int	numeric;

	numeric = 1;
	t = ft_strlen(str);
	i = 0;
	while (i < t)
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			numeric = 0;
			break ;
		}
		else
			numeric = 1;
		i++;
	}
	return (numeric);
}
