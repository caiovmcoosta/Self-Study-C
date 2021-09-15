#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*2.3.2 Em uma empresa de saneamento básico os serviços 
recebem uma numeração de acordo com sua natureza: 1 para
troca de tubulação, 2 para verificação de problemas de
vazamento, 3 para ligação de água e esgoto. De acordo com o
problema, o serviço é agendado para um determinado horário do
dia. 8h da manhã são agendados os serviços 1, para às 11h são
agendados os serviços 2 e para às 15h são agendados os serviços
3. Você, como programador de sistemas da empresa, foi
designado para fazer um programa que agende os serviços em
seus respectivos horários. O programa deve receber o numero do
serviço e mostrar o seu horário de agendamento. Use o comando
switch, com mensagem de erro caso o usuário digite um numero
invalido. Faça o algoritmo e o fluxograma antes do programa. */

int main(void)
{
	int escolha, invalido=0;
	setlocale(LC_ALL, "Portuguese");
	 
	printf("Bem vindo ao sistema de agendamento ao saneamento básico. Digite o número referente ao seu problema, sendo: (1) para troca de tubulação, (2) para verificação de problemas devazamento e (3) para ligação de água e esgoto.\nDigite:  ");
	scanf("%i", &escolha);
	
	do
	{
		switch(escolha)
		{
			case 1:
				printf("\nÓtimo, você escolheu (1), Troca de tubulação, sua visita está agendada para as 08h.");
				invalido=1;
				break;
				
				
			case 2: 
				printf("\nÓtimo, você escolheu (2), Ligação de Água e Esgoto, sua visita está agendada para as 15h.");
				invalido=1;
				break;
				
			case 3:
				printf("\nÓtimo, você escolheu (3), Troca de tubulação, sua visita está agendada para as 08h.");
				invalido=1;
				break;
				
			default:
				printf("Opção invalida, digite novamente\n");
				scanf("%i", &escolha);
				break;
				
		}

	}while(invalido==0);
	
	printf("\n\nObrigado, até a visita! \n\n");
system("PAUSE");
}
