/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:23:10 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/01 21:47:30 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 5;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("A: %d\nB: %d\nDiv: %d\nMod: %d\n", a, b, div, mod);

	return (0);
}*/
