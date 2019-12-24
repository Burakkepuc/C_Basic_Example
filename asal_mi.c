#include <stdio.h>
	int asal_mi(int x){
		int i;
		
		for(i=2;i<x;i++){
			if(x%i==0){//x=5
				return 0;
			}
		}	
		return 1;
	}
	
int main(){
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(asal_mi(sayi)==0){
		printf("Bu sayi asal degildir. ");
	}
	else{
		printf("Sayi asaldir.");
	}
	
	
}

