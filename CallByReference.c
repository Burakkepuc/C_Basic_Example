#include <stdio.h>

void degerDegistir(int *a,int *b){
	
	int gecici = *a;
	
	*a=*b;
		
	*b=gecici;
	
}


int main(){

	int x=5;
	int y=7;
	
	degerDegistir(&x,&y);
	
	printf("x:%d y:%d",x,y);
	
}
