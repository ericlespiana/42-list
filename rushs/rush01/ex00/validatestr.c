/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validatestr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 03:49:29 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/06 19:27:15 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	board(void); //prototipo da funcao board

int	validatestr(const char *str, int *vet)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 31) //enquanto o I for menor que 31, 31 é o tamanho total do parametro que o cadete vai passar pra funcionar o programa, contando os numeros e os espaços
	{
		if (i % 2 == 0) //Entra nesse if se o caracter que tivermos analisandi estiver na posição par posicao[0], posicao[2] etc...
		{
			if (str[i] >= '1' && str[i] <= '4') //Se esse caracter for um numero entre 1 e 4, entra nesse if
				vet[j++] = str[i] - '0'; //Se for o caso, o vetor que passamos como parametro recebe esse caracter convertido para inteiro
			else //Se o caracter nao for um numero entre 1 e 4
				return (1); //Termina o programa. Lembrando que o formato tem que ser exatamente esse "2 4 3 1 2 3 4", sempre um numero e depois um espaço
		}
		else if (str[i] != ' ') //Se o caracter que estamos analisando nao estiver na posicao par e nao for um espaço
		{
			return (1); //termina o programa
		}
		i++;
	}
	board(); //Se der tudo certo, chama a funcao board() vamos la
	return (0);
}
