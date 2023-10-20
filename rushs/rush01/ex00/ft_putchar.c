/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 03:56:02 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/06 19:21:46 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(void)
{
	write(1, "Error\n", 6); //printa a mensagem de erro
}

void	ft_putchar(char c)
{
	write(1, &c, 1); //printa o caracter passado como parametro
}
