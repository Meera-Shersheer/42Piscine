/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:25:43 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/08 18:25:30 by mshershe         ###   ########.fr       */
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
	unsigned int	comp;
	unsigned int	s2_t;
	unsigned int	s1_t;
	unsigned int	i;

	comp = -2;
	i = 0;
	s1_t = ft_strlen(s1);
	s2_t = ft_strlen(s2);
	while ((i < s1_t && i < s2_t) || i < n)
	{
		if (s1[i] == s2[i])
			comp = 0;
		else
			return (s1[i] - s2[i]);
		i++;
	}
	return (comp);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*f;
	int		s_t;
	int		i;

	i = 0;
	f = 0;
	s_t = ft_strlen(str);
	while (i < s_t)
	{
		if (str[i] == *to_find && (str[i] != '\0' && *to_find != '\0'))
		{
			if (ft_strncmp(&str[i], to_find, ft_strlen(to_find)) == 0)
			{
				f = &str[i];
			}
		}
		i++;
	}
	return (f);
}
