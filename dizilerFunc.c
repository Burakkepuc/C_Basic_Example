#include <stdio.h>

int array_carpim(int array[],int size){
int i,carp = 1;

for(i=1;i<size;i++){
	carp=array[i]*carp;
	
	
}
return carp;//Sonucu döndürür.
}

void bastir(int dizi[][4],int size){
	int i,j;
	for(i=0;i<size;i++){
	for(j=0,j<4;j++){
		printf("%d",dizi[i][j]);
	}
}
}

int main(){

	/*int dizi[5]={1,2,3,4,5};
	
	printf("%d",array_carpim(dizi,5));
*/

int arr[3][4],i,j;

for(i=0;i<3;i++){
	for(j=0,j<4;j++){
		scanf("%d",&arr[3][4]);
	}
}
bastir(arr 3);


}

