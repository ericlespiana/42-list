/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 03:48:20 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/10 03:53:32 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc -= 1;
	while (argc > 0)
	{
		while (*argv[argc] != '\0')
		{
			write(1, argv[argc], 1);
			++argv[argc];
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
