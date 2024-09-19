/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:34:58 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/06 20:13:11 by mshershe         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	t;
	int	i;
	int	alpha;

	alpha = 1;
	t = ft_strlen(str);
	i = 0;
	while (i < t)
	{
		if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97 && str[i] <= 122))
		{
			alpha = 0;
			break ;
		}
		else
			alpha = 1;
		i++;
	}
	return (alpha);
}
