/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:36:13 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/01 21:53:23 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	backup1;
	int	backup2;

	backup1 = *a;
	backup2 = *b;
	*a = backup1 / backup2;
	*b = backup1 % backup2;
}
/*
int	main(void)
{
	int a = 5;
	int b = 2;

	printf("A: %d\nB: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("A: %d\nB: %d\n", a, b);

	return (0);
}*/
