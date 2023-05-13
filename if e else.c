#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	
	int i;
	
	printf("Qual é a sua idade? '\n");
	scanf("%d", &i);
	
	if(i>=18){
		printf("Pode entrar na balada.");
		} 
		else {
		printf("Não pode entrar na balada");}
}
