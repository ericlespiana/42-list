/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 04:03:17 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/10 05:45:19 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	bubble_sort(char **str, int n)
{
	int		i;
	int		j;
	char	*backup;

	i = 1;
	while (i < n)
	{
		j = 1;
		while (j < n)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				backup = str[j];
				str[j] = str[j + 1];
				str[j + 1] = backup;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	argc -= 1;
	bubble_sort(argv, argc);
	i = 1;
	while (i <= argc)
	{
		while (*argv[i] != '\0')
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
