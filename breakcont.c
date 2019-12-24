#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
/*int i,toplam=0,sayi;

for(i=0;true;i++){
printf("Bir sayi giriniz:(Cikmak icin -1'e basiniz) ");
scanf("%d",&sayi);

if(sayi==-1){
	break;
}

toplam=toplam+sayi;
	
}
	printf("Sayilarin toplami :%d",toplam);*/
	int i=0,toplam=0;
	
	while (i<=10){
		i++;
		if(i%2==1){
			
			continue;
		}
		toplam+=i;
	}
	printf("Toplam=%d",toplam);
}

