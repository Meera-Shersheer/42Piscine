/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:42:37 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/06 21:17:07 by mshershe         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	t;
	int	i;
	int	print;

	print = 1;
	t = ft_strlen(str);
	i = 0;
	while (i < t)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			print = 0;
			break ;
		}
		else
			print = 1;
		i++;
	}
	return (print);
}
