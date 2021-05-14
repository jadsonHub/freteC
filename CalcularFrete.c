#include <stdio.h>
#include <locale.h>
#include <locale.h>
#include <string.h>

int main()
{

	setlocale(LC_ALL, "portuguese");

	float valorCamisa, quantidade, frete = 20.00, valorFinal;
	char estado[2];

	printf("\nInforme o valor da Camisa :\nR$:");
	scanf("%f", &valorCamisa);

	printf("\nInforme a Quantidade de camisas maximo 5 :\nQuantidade:");
	scanf("%f", &quantidade);

	while (quantidade < 1 || quantidade > 5)
	{
		printf("valor errado digite um valor entre 1 e 5 \nValor:");
		scanf("%f", &quantidade);
	}

	valorFinal = valorCamisa * quantidade;

	printf("\nInforme seu estado para calcular o frete EX: BA\nInforme seu Estado:");
	scanf("%s", estado);
	(estado);

	if (strcmp(estado, "BA") == 0 || strcmp(estado, "ba") == 0)
	{
		printf("\nVoc� esta isento do frete! Valor final a Pagar R$  %.2f Reais\n", valorFinal);
	}
	else
	{
		printf("\nValor do frete R$ 20,00 Reais ,Valor final a Pagar R$ %.2f Reais\n", frete + valorFinal);
	}
}
