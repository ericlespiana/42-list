/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 03:53:52 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/02 05:30:24 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	backup;
	int	cont;

	i = 0;
	while (i < size)
	{
		j = 0;
		cont = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1] && (j + 1 < size))
			{
				backup = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = backup;
				cont = 1;
			}
			j++;
		}
		i++;
		if (cont == 0)
			i = size;
	}
}
/*
int	main(void)
{
	int	array[10] = {1, 0, 8, 9, -5, -38, 7, 0, 5, -36};
	int	i = 0;

	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n\n");
	ft_sort_int_tab(array, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}*/
