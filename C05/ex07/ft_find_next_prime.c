/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:00:43 by erpiana           #+#    #+#             */
/*   Updated: 2023/10/09 19:25:24 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i++ == 0)
		{
			i = 2;
			nb++;
		}
	}
	return (nb);
}
/*
int	main(void)
{

	printf("%d", ft_find_next_prime(19));

	return (0);
}*/
