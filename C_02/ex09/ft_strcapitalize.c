/* ************************(!(char_is_alpha(&str[i]) || char_is_numeric(&str[i])))************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:20:05 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/07 21:04:13 by mshershe         ###   ########.fr       */
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

int     ft_wordlen(char *str)
{
        int     n;

        n = 0;
        while (!(char_is_alpha(str) || char_is_numeric(str)))
        {
                n++;
                str = str + 1;
        }
        return (n);
}

int	char_is_alpha(char *str)
{
	int	alpha;

	if (!(*str >= 65 && *str <= 90) && !(*str >= 97 && *str <= 122))
	{
		alpha = 0;
	}
	else
		alpha = 1;
	return (alpha);
}

int	char_is_numeric(char *str)
{
	int	numeric;

	if (!(*str >= 48 && *str <= 57))
	{
		numeric = 0;
	}
	else
		numeric = 1;
	return (numeric);
}

int	char_is_lowercase(char *str)
{
	int	lower;

	if (!(*str >= 97 && *str <= 122))
	{
		lower = 0;
	}
	else
		lower = 1;
	return (lower);
}

int     char_is_uppercase(char *str)
{
        int     upper;

        if (!(*str >= 65 && *str <= 90))
        {
                upper = 0;
        }
        else
                upper = 1;
        return (upper);
}

char	*ft_strcapitalize(char *str)
{
	int	t;
	int	i;
	int	n;
	int	f;

	n = 0 ;
	t = ft_strlen(str);
	i = 0;
	if (char_is_lowercase(&str[0]))
		str[0] -= 32;
	while (i < t)
	{
		f = 0 ;
		if (char_is_uppercase(&str[i])&& n > 0)
		{
			str[i] += 32;
			n--;
		}
		if (!(char_is_alpha(&str[i]) || char_is_numeric(&str[i])))
		{
			if (char_is_lowercase(&str[i +1]))
			{
				str[i +1] -= 32;
				f = 3;
			}
		}
		if (f == 3)
			n = ft_wordlen( &str[i+1]);

		i++;
	}
	return (str);
}
