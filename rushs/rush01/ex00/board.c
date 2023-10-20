/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:45:59 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/06 19:31:41 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c); //Declaracao do prototipo da funcao ft_putchar

void	board(void)
{
	int	**matrix; //Criacao do ponteiro de ponteiro que sera nossa matrix
	int	i;
	int	j;
	int	n;

	i = 0; 
	n = '0';
	n = (char)n; //Isso aqui é so um migue pq tava dando erro na norminette, eu queria uma variavel do tipo char, como tava dando erro criei uma int e depois converti pra char
	matrix = malloc (sizeof (int *) * 4); //O ponteiro de ponteiro vai receber 4 espaços de memoria que pode colocar 4 ponteiros la dentro, atraves da funcao malloc
	while (i < 4)
		matrix[i++] = malloc (sizeof (int) * 4); //Enquanto o I for menor que 4, os espaços que ta dentro da matrix la em cima vai receber + 4 espaços pra inteiro cada um
	i = -1;
	//Esse while é pra popular a matrix e printar na tela
	while (++i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = 0; //matrix na posicao[i][j], quando i e j for 0 sera matrix[0][0] ou seja, linha 0 e coluna 0, vai receber 0, assim por diante. Zerar toda matrix
			n = matrix[i][j++] + '0'; //Esse valor da matrix vai ser passado pra variavel N como um caracter pra poder ser printado pelo write
			ft_putchar(' '); //Printa um espaço na tela
			ft_putchar(n); //Printa o valor da matriz que foi passado para o N
		}	
		ft_putchar('\n');
	}
	free(matrix); //No final libera a memória que criamos com o malloc através da funcao free
}
