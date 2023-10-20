/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 03:39:18 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/06 03:42:53 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_error(void);
int		validatestr(const char *str, int *vet);

int	main(int argc, char *argv[])
{
	int	result;
	int	vet[16];

	if (argc != 2)
	{
		ft_print_error();
		return (1);
	}
	result = validatestr(argv[1], vet);
	if (result)
	{
		ft_print_error();
		return (1);
	}
	return (0);
}
