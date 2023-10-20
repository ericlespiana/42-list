/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 06:47:36 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/14 13:54:44 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

int	return_size(int size, char **strs, int sep)
{
	int	i;
	int	cont;
	int	j;

	cont = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			cont++;
			j++;
		}
		i++;
	}
	while (size >= 2)
	{
		cont += sep;
		size--;
	}
	return (cont + 1);
}

void	concatenate_strs(char *new_str, char **strs, char *sep, int size_str)
{
	int	i;
	int	j;

	j = 0;
	while (strs[j] != NULL)
		j++;
	ft_strcat(new_str, strs[0]);
	i = 1;
	while (i < j)
	{
		if (new_str[i] != '\0')
			ft_strcat(new_str, sep);
		ft_strcat(new_str, strs[i]);
		i++;
	}
	new_str[size_str] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty_str;
	char	*new_str;
	int		size_new_str;
	int		size_sep;

	if (size == 0)
	{
		empty_str = (char *)malloc(sizeof(char));
		if (empty_str == NULL)
			return (NULL);
		empty_str[0] = '\0';
		return (empty_str);
	}
	size_sep = str_len(sep);
	size_new_str = return_size(size, strs, size_sep);
	new_str = (char *) malloc(sizeof(char) * size_new_str);
	if (new_str == NULL)
		return (NULL);
	concatenate_strs(new_str, strs, sep, size_new_str);
	return (new_str);
}
/*
int	main(void)
{
	char	*argv[] = {"Ericles", "Piana", "da", "Silva",  NULL};
	char	*str;

	str = ft_strjoin(4, argv, "42");
	printf("%s\n", str);
	return (0);
}
*/
