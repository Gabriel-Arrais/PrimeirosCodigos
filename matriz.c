#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int matriz[2][2] = {{0, 0}, 
	                    {0, 0}};
    int l, c;
    
    for(l=0; l<2; l++){
    	for(c=0; c<2; c++){
    		printf("%d ", matriz[l][c]);
		} printf("\n");
	}
}
