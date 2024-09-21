#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=3;
	
	while(x<=33){
		if(x % 3 == 0){
			printf("\n %i", x);
		}
		x++;
	}
	getchar();
}