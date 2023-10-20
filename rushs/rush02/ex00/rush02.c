/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 09:30:26 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/13 16:00:06 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}

char	*open_file(void)
{
	int		file_description;
	char	*file_dict;

	file_dict = (char *) malloc(sizeof(char) * 10000);
	file_description = open("numbers.dict", O_RDONLY);
	if (file_description == -1)
	{
		write(1, "Dict Error\n", 11);
		free(file_dict);
		close(file_description);
		return (NULL);
	}
	read(file_description, file_dict, 10000);
	close(file_description);
	return (file_dict);
}

char	*remove_space(char *dict)
{
	int		i;
	int		c;
	char	*new_dict;

	new_dict = (char *) malloc(sizeof(char) * sizeof(dict));
	c = 0;
	i = 0;
	while (dict[i] != '\0')
	{
		if (dict[i] != ' ')
		{
			new_dict[c] = dict[i];
			c++;
		}
		i++;
	}
	new_dict[c] = '\0';
	return (new_dict);
}

int	main(int argc, char **argv)
{
	char	*file_dict;
	int		number;
	int		ref;

	number = 0;
	file_dict = open_file();
	if (argc == 2)
		number = ft_atoi(argv[1]);
	else if (argc == 3)
	{
		number = ft_atoi(argv[2]);
		ref = ft_atoi(argv[1]);
	}
	if (number < 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	file_dict = remove_space(file_dict);
	while (*file_dict)
	{
		write(1, file_dict, 1);
		file_dict++;
	}
	return (0);
}
