/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:48:06 by mshershe          #+#    #+#             */
/*   Updated: 2024/05/19 16:15:45 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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

void	swap(char *argv[], int n)
{
	char	*a;

	a = argv[n];
	argv[n] = argv[n + 1];
	argv[n + 1] = a;
}

void	print(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		n;
	int		k;

	k = 1;
	while (k)
	{
		k = 0;
		n = 1;
		while (n < argc - 1)
		{
			if (ft_strcmp(argv[n], argv[n + 1]) > 0)
			{
				swap(argv, n);
				k = 1;
			}
			n++;
		}
	}
	print (argc, argv);
	return (0);
}
