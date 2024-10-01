#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=1;
	float v=0, v1=0, r=0;
	while(x<=8){
		printf("\nInforme o valor da %i* cedula:",x);
		scanf("%f",&v);
		v1 += v;
		x++;
	}
	r = v1*5.62;
	printf("\nValor do acumulado em dolar: D$%.2f",v1);
	printf("\nValor do acumulado em reais: R$%.2f",r);
	getchar();
}
