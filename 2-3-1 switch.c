#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*2.3.1Fa�a um programa que permita que o usu�rio entre com um
numero num intervalo de 0 a 6, equivalendo cada um deles a um
dia da semana (domingo = 0). Imprima o dia da semana
equivalente ao numero digitado pelo usu�rio. Caso o usu�rio
digite um numero invalido, d� uma mensagem informando-o. Use
o comando "switch" para os testes.*/

int main(void)
{
	int escolha, invalido=0;
	setlocale(LC_ALL, "Portuguese");
	 
	printf("Digite um n�mero e escolha um dia da semana sendo 0 - Domingo e 6 - S�bado respectivamente: ");
	scanf("%i", &escolha);
	
	do
	{
		switch(escolha)
		{
			case 0: 
				printf("\nVoc� escolheu Domingo. ");
				invalido=1;
				break;
				
			case 1:
				printf("\nVoc� escolheu Segunda. ");
				invalido=1;
				break;
				
				
			case 2: 
				printf("\nVoc� escolheu Ter�a. ");
				invalido=1;
				break;
				
			case 3:
				printf("\nVoc� escolheu Quarta. ");
				invalido=1;
				break;
				
			case 4: 
				printf("\nVoc� escolheu Quinta. ");
				invalido=1;
				break;
				
			case 5:
				printf("\nVoc� escolheu Sexta. ");
				invalido=1;
				break;
				
			case 6: 
				printf("\nVoc� escolheu S�bado. ");
				invalido=1;
				break;
				
			default:
				printf("Op��o invalida, digite novamente\n");
				printf("\nDigite um n�mero de 0 a 6: ");
				scanf("%i", &escolha);
				break;
				
		}

	}while(invalido==0);
	
	printf("\n\nObrigado pela escolha.\n\n");
system("PAUSE");
}
