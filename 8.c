#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=1, pma=0;
	float a=0, maltura=0;
	
	while(x<=5){
		printf("\nAltura da %i*:",x);
		scanf("%f",&a);
		if(a> maltura){
			maltura = a;
			pma = x;
		}
		x++;
	}
	printf("\nA pessoa mais alta e a %d*, sua altura e de %.2f metros", pma, maltura);
	getchar();
}