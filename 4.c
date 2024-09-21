#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=1, b;
	float t=0, f=0, a=0;
	
	
	while(x<=8){
		printf("\nInforme o valor do %i* produto:",x);
		scanf("%f", &t);
		fflush(stdin);
		f += t;
		x++;
	}	
	printf("\nValor da conta: R$%.2f", f);
	
	printf("\nFormas de pagamento:");
	printf("\n1 - Pagamento a vista desconto de 10%%");
	printf("\n2 - Pagamento a prazo acrescimo de 15%%");
	printf("\nInforme a forma de pagamento:");
	scanf("%d",&b);
	
	switch(b){
		case 1:
			a = f*1.10;
			printf("\nValor a pagar: R$%.2f", a);
			break;
		case 2:
			a = f*1.15;
			printf("\nValor a pagar: R$%.2f", a);
			break;
		default:
			printf("\nOpcao Invalida");
			break;
	}
	getchar();
}