/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 03:39:18 by erpiana           #+#    #+#             */
/*   Updated: 2023/08/06 19:21:18 by erpiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_error(void); // Declarando o prototipo da funcao que vai exibir o erro
int		validatestr(const char *str, int *vet); // Declarando o prototipo da funcao de validacao

int	main(int argc, char *argv[])
{
	int	result; // Criando variavel que vai receber o retorno da funcao de validacao (1 ou 0), se for 1, printa erro, senao, o programa rodou certo
	int	vet[16]; // Criando o vetor que recebera os parametros passados no inicio, que converteremos para int mais pra frente

	if (argc != 2) //Se a quantidade de argumento passado for diferente de 2, signfica que mandaram mais coisa no inicio do que o esperado, entao vai exibir a mensagem de erro
	{
		ft_print_error(); //Chama a funcao que exibe o erro
		return (1); //Termina o programa
	}
	//Se nao houve esse erro acima, vamos mais pra baixo:
	result = validatestr(argv[1], vet); // chama a funcao validatest passando a string que foi passada como parametro e o vetor de inteiros que criamos la em cima
	if (result) // Se o retorno da funcao for 1, entra nesse if
	{
		ft_print_error(); // Printa a mensagem de erro
		return (1); // Termina o programa
	}
	return (0); //Se nenhum erro acima for encontrado, significa que deu tudo certo, retorna 0 e termina o programa
}
