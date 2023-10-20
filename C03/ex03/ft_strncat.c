/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 04:57:57 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/04 05:34:23 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((j < nb) && (src[j] != '\0'))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char vet1[10] = "56789";
	char vet2[10] = "1234";
	char *ptr;

	ptr = ft_strncat(vet2, vet1, 3);
	printf("%s", ptr);

	return (0);
}*/
