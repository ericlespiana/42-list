/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 05:35:01 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/04 06:16:23 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	j = 0;
	p = 0;
	while (str[i] != '\0')
	{
		if (to_find[j] == str[i] || to_find[j] == '\0')
		{
			if (j == 0)
				p = i;
			if (to_find[j] == '\0')
				return (&str[p]);
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *ptr;

	ptr = ft_strstr("Ericles Piana da Silva", "iana");
	printf("%s", ptr);
	return (0);
}*/
