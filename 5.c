#include <stdio.h>
#include <stdlib.h>

void main(){
	int x;
	float f=0, f1=0, f2=0, t1=0, t2=0;
	
	for(x=1; x<=5; x++){
		printf("\nInforme o valor do %i* produto do 1* acumulador:",x);
		scanf("%f",&f1);
		t1 += f1;
	}
	
	x = 1;
	
	while(x<=5){
		printf("\nInforme o valor da %i* produto do 2* acumulador:",x);
		scanf("%f",&f2);
		t2 += f2;
		x++;
	}
	f = t1 + t2;
	
	printf("\nValor do acumulador 1: R$%.2f",t1);
	printf("\nValor do acumulador 2: R$%.2f",t2);
	printf("\nValor da soma dos acumuladores: R$%.2f",f);
	getchar(); 
}