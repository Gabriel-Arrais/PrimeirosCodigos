#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	 printf("Digite um n�mero correspondente ao dia da semana entre 1 e 7.");
	 scanf("%d", &i);
	 
	switch(i){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-feira");
			break;
		case 3:
			printf("Ter�a-feira");
			break;
		case 4:
			printf("Quarta-feira");
			break;
		case 5:
			printf("Quinta-feira");
			break;
		case 6:
			printf("Sexta-feira");
			break;
		case 7:
			printf("S�bado");
			break;
		default:
			printf("Valor n�o correspondente.");
			break;
	}
}
