#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	i = 5;
	
	while(i<100){
     printf("%d", i);
     i = i + 5;
	}
}
