/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:28:37 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/02 00:09:46 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	backup;

	i = 0;
	backup = 0;
	while (--size > i)
	{
		backup = tab[i];
		tab[i++] = tab[size];
		tab[size] = backup;
	}
}
/*
int main(void)
{
	int tab[4] = {1, 2, 3, 4};
	int i = 0;
	int size = 4;

	while (i < size)
		printf("%d", tab[i++]);

	printf("\n\n");

	ft_rev_int_tab(tab, size);

	i = 0;
	while (i < size)
                printf("%d", tab[i++]);

	return (0);	
}*/
