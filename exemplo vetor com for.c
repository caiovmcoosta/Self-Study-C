#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float notas[10], media, soma = 0; 
	
	int pos=0, i;
	
	for (i=0; i<10; i++)
	{
		
		printf("Entre com a %iª nota: ", i+1);
		scanf("%f",&notas[i]); 
		soma = soma + notas[i];
			
	}
	
	
	media=soma/i;
	
	printf("A media da classe é: %.1f", media);
	
	printf("\nDigite o numero do aluno que deseja ver a nota: ");
	scanf("%i", &pos);
	printf("A nota do aluno %i é de %2f. ", pos, notas[pos-1]);
	
	getch();
}
