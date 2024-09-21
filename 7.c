#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=1, pmp=1;
	float p=0, mpeso=0;
	
	while(x<=5){
		printf("\nPeso da %i* pessoa:",x);
		scanf("%f",&p);
		if(p> mpeso){
			mpeso = p;
			pmp = x;
		}
		x++;
	}
	printf("\nA pessoa mais pesada e a %d* com peso de %.2f Kg",pmp, mpeso);
	getchar();
}
