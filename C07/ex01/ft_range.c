/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:08:06 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/14 13:57:38 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	array = (int *) malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);
	if (min >= max)
		return (NULL);
	i = 0;
	while (min < max)
		array[i++] = min++;
	return (array);
}
/*
int	main(void)
{
	int *ptr;
	int i = 0;

	ptr = ft_range(1, 8);
	while (i < 7)
		printf("%d\n", ptr[i++]);
	free(ptr);
	return (0);
}
*/
