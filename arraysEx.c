#include <stdio.h>

int carp(int matris[],int size){//Boyut bilgisini gireriz.

int carpim=1;
int i=0;

for(;i<size;i++){//index'e kadar gidecek.
	carpim*=matris[i];
}
return carpim;
	
}




void bastir(int matrisimiz[][4],int size){//1. boyutu biz vereceðiz.
										  //2. boyutu numaralandýracaðýz.
	int i,j;
	
	for(i=0;i<size;i++){
		for(j=0;j<4;j++){
			printf("%d ",matrisimiz[i][j]);
		}
		printf("\n");
	}
	
}




int main(){
/*	int sayilar[5]={1,2,3,4,5};
	
	printf("%d",carp(sayilar,5));
*/

	int i,j,matris[3][4];
	
	printf("Matrisi doldurunuz: \n");
	
		for(i=0;i<3;i++){
			for(j=0;j<4;j++){
				scanf("%d",&matris[i][j]);
			}
		}
	
	bastir(matris,3);
	
}
