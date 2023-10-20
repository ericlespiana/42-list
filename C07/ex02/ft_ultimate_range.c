/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 01:57:05 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/14 05:49:48 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *) malloc(sizeof(int) * (max - min));
	if (!array)
		return (-1);
	i = 0;
	while (min < max)
		array[i++] = min++;
	*range = array;
	return (i);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	**range;
	int *array;
	int i = 0;

	min = 1;
	max = 8;

	range = &array;

	ft_ultimate_range(range, min, max);
	while (array[i])
		printf("%d ", array[i++]);

	printf("\n");
	while (*range[0]){
		printf("%d ", *range[0]);
		range[0]++;
	}
}*/
