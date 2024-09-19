/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:23:09 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/19 11:40:27 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_alpha(char *str)
{
	if (!(*str >= 65 && *str <= 90) && !(*str >= 97 && *str <= 122))
	{
		return (0);
	}
	else
		return (1);
}

int	nb(char *str)
{
	if (!(*str >= 48 && *str <= 57))
	{
		return (0);
	}
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	pn;
	int	sign;
	int	num;

	sign = 0;
	num = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str != '\0' && !char_is_alpha(str))
	{
		if (*str == 43 || *str == 45 || nb(str))
		{
			if (*str == '-')
				sign++;
			if (*str <= '9' && *str >= '0')
				num = num * 10 + (*str - '0');
		}
		str = str + 1;
	}
	if (sign % 2 == 1)
		pn = -1;
	else
		pn = 1;
	return (num * pn);
}
