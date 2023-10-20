/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:45:59 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/10 03:06:20 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	board(void)
{
	int		**matrix;
	int		i;
	int		j;
	char	n;

	i = 0;
	n = '0';
	matrix = malloc (sizeof (int *) * 4);
	while (i < 4)
		matrix[i++] = malloc (sizeof (int) * 4);
	i = -1;
	while (++i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = 0;
			n = matrix[i][j++] + '0';
			ft_putchar(' ');
			ft_putchar(n);
		}	
		ft_putchar('\n');
	}
	free(matrix);
}
