#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int vet[3] = {10, 20, 30};
	int i;
	
	for(i=0; i<3; i++){
		printf("%d ", vet[i]);
	}
}
