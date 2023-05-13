#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	for(i=5; i<100; i = i +5){
		printf("%d ", i);
	}
}
