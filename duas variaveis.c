#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int idade, idade_nova;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	idade_nova = idade + 3;
	
	printf("Daqui a tr�s anos voc� ter� %d anos.", idade_nova);
}
