#include <stdio.h>
/*do{
	
}while(kosul);
*/


int main(){

int n,hane=0,toplam=0;
	
	printf("Sayiyi giriniz:");
	scanf("%d",&n);
do{
	
	toplam=toplam + (n%10);//N'i 10 a bölüp kalanini aliyor.
	printf(" Kalan: %d\n",toplam);
	
	hane++;//Haneyi bir arttýrýyor.
	 printf(" Hane: %d\n",hane);
	
	n = n/10;
	  printf(" Bolum: %d\n",n);

}while(n>0);

printf("Rakamlari toplami %d %d Haneli",toplam,hane);

	
}
