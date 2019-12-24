#include <stdio.h>


int main(){
int i;float toplam=0.0,sayilar;

for(i=0;i<5;i++){
	printf("Sayi giriniz: ");
	scanf("%f",&sayilar);
	
		toplam=toplam+sayilar;
}


/*for(i=0;i<5;i++){
	
	toplam=toplam+sayilar;
}*/

	printf("%f",toplam/5);
}
