#include <stdio.h>

int main(){
	
/*	int i;
	int j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		printf("i: %d j:%d\n",i,j);
	}*/
	
	int i=0,ilksayi=1,ikincisayi=1;
	
	printf("%d\n",ilksayi);
	printf("%d\n",ikincisayi);
	for(i=0;i<12;i++){
		int temp=ikincisayi;
		ikincisayi=ilksayi+ikincisayi;
		ilksayi=temp;
		
		printf("%d\n",ikincisayi);
	}
}
