#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int i = 5;
	
	do{ printf("%d ", i);
	    i = i +5;
	} while (i<100);
}
