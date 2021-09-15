#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*2.3.1Faça um programa que permita que o usuário entre com um
numero num intervalo de 0 a 6, equivalendo cada um deles a um
dia da semana (domingo = 0). Imprima o dia da semana
equivalente ao numero digitado pelo usuário. Caso o usuário
digite um numero invalido, dê uma mensagem informando-o. Use
o comando "switch" para os testes.*/

int main(void)
{
	int escolha, invalido=0;
	setlocale(LC_ALL, "Portuguese");
	 
	printf("Digite um número e escolha um dia da semana sendo 0 - Domingo e 6 - Sábado respectivamente: ");
	scanf("%i", &escolha);
	
	do
	{
		switch(escolha)
		{
			case 0: 
				printf("\nVocê escolheu Domingo. ");
				invalido=1;
				break;
				
			case 1:
				printf("\nVocê escolheu Segunda. ");
				invalido=1;
				break;
				
				
			case 2: 
				printf("\nVocê escolheu Terça. ");
				invalido=1;
				break;
				
			case 3:
				printf("\nVocê escolheu Quarta. ");
				invalido=1;
				break;
				
			case 4: 
				printf("\nVocê escolheu Quinta. ");
				invalido=1;
				break;
				
			case 5:
				printf("\nVocê escolheu Sexta. ");
				invalido=1;
				break;
				
			case 6: 
				printf("\nVocê escolheu Sábado. ");
				invalido=1;
				break;
				
			default:
				printf("Opção invalida, digite novamente\n");
				printf("\nDigite um número de 0 a 6: ");
				scanf("%i", &escolha);
				break;
				
		}

	}while(invalido==0);
	
	printf("\n\nObrigado pela escolha.\n\n");
system("PAUSE");
}
