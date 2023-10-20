/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validatestr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 03:49:29 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/06 03:53:57 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	board(void);

int	validatestr(const char *str, int *vet)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	if (i > 31)
		return (1);
	i = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
		{
			if (str[i] >= '1' && str[i] <= '4')
				vet[j++] = str[i] - '0';
			else
				return (1);
		}
		else if (str[i] != ' ')
		{
			return (1);
		}
		i++;
	}
	board();
	return (0);
}
