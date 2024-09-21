#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=1;
	float l=0, a=0, somaluz=0, somaagua=0, soma=0, media=0;
	
	while(x<=5){
	printf("\nInforme o valor da conta de luz:");
	scanf("%f",&l);
	fflush(stdin);
	somaluz += l;
	
	printf("\nInforme o valor da conta de agua:");
	scanf("%f",&a);
	fflush(stdin);
	somaagua += a;
	x++;
	}
	soma = somaluz + somaagua;
	media = soma/10;
	
	printf("\nValor total das contas: R$%.2f", soma);
	printf("\nValor medio das contas: R$%.2f", media);
	getchar();	
}