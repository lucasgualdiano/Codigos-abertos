#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=1;
	float t=0, l=0, f=0;
	
	while(x<=3){
		printf("\nInforme o valor da %i* conta de luz:", x);
		scanf("%f",&t);
		fflush(stdin);
		l += t;
		x++;
	}
	
	f = l*1.15;
	printf("\nValor total da conta: R$%.2f",l);
	printf("\nValor a pagar da conta: R$%.2f",f);
	
	getchar();
}
