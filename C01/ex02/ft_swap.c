/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:09:04 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/01 21:42:47 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	backup;

	backup = *a;
	*a = *b;
	*b = backup;
}
/*
int main(void)
{
	int a = 5;
	int b = 4;

	printf("%d\n%d\n", a, b);

	ft_swap(&a, &b);

	printf("%d\n%d\n", a, b);
	return (0);
}*/
