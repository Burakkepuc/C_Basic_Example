#include <stdio.h>

void hata(int x,int y){
	printf("Hata kodu %d %d",x,y);
}

int main(){
	int sayi;
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi<0){
		
		hata(404,410);
	}
	else{
		printf("Tebrikler.");
	}
}

