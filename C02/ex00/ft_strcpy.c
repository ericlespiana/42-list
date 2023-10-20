/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 06:08:14 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/02 10:18:45 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{

	char string_[12] = "Hello world!";
	char string_cpy[12];
	char *pont_string;
	int i;


	pont_string = ft_strcpy(string_cpy, string_);
	i = 0;
	while (pont_string[i] != '\0')
		printf("%c", pont_string[i++]);


	
	return (0);
}*/
