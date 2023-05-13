#include <stdio.h>
#include <locale.h>

struct pessoal{
	char nome[20];
	int idade;
	float altura;
};

int main(){
	setlocale(LC_ALL, "portuguese");
	
	struct pessoal p;
	
	printf("Digite o nome seu nome: ");
	fgets(p.nome, 20, stdin);
	
	printf("Digite a sua idade: ");
	scanf("%d", &p.idade);
	
    printf("Digite a sua altura: ");
    scanf("%f", &p.altura);
    
    printf("Resultado: \n");
    printf("Nome: %s \n", p.nome);
    printf("Idade: %d \n", p.idade);
    printf("Altura: %.2f \n", p.altura);
	
	
}
