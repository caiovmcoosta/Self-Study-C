#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*2.3.2 Em uma empresa de saneamento b�sico os servi�os 
recebem uma numera��o de acordo com sua natureza: 1 para
troca de tubula��o, 2 para verifica��o de problemas de
vazamento, 3 para liga��o de �gua e esgoto. De acordo com o
problema, o servi�o � agendado para um determinado hor�rio do
dia. 8h da manh� s�o agendados os servi�os 1, para �s 11h s�o
agendados os servi�os 2 e para �s 15h s�o agendados os servi�os
3. Voc�, como programador de sistemas da empresa, foi
designado para fazer um programa que agende os servi�os em
seus respectivos hor�rios. O programa deve receber o numero do
servi�o e mostrar o seu hor�rio de agendamento. Use o comando
switch, com mensagem de erro caso o usu�rio digite um numero
invalido. Fa�a o algoritmo e o fluxograma antes do programa. */

int main(void)
{
	int escolha, invalido=0;
	setlocale(LC_ALL, "Portuguese");
	 
	printf("Bem vindo ao sistema de agendamento ao saneamento b�sico. Digite o n�mero referente ao seu problema, sendo: (1) para troca de tubula��o, (2) para verifica��o de problemas devazamento e (3) para liga��o de �gua e esgoto.\nDigite:  ");
	scanf("%i", &escolha);
	
	do
	{
		switch(escolha)
		{
			case 1:
				printf("\n�timo, voc� escolheu (1), Troca de tubula��o, sua visita est� agendada para as 08h.");
				invalido=1;
				break;
				
				
			case 2: 
				printf("\n�timo, voc� escolheu (2), Liga��o de �gua e Esgoto, sua visita est� agendada para as 15h.");
				invalido=1;
				break;
				
			case 3:
				printf("\n�timo, voc� escolheu (3), Troca de tubula��o, sua visita est� agendada para as 08h.");
				invalido=1;
				break;
				
			default:
				printf("Op��o invalida, digite novamente\n");
				scanf("%i", &escolha);
				break;
				
		}

	}while(invalido==0);
	
	printf("\n\nObrigado, at� a visita! \n\n");
system("PAUSE");
}
