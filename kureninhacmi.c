#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
	float pi=3.14,sonuc;
	int r ;
	
	printf("Kurenin yaricapini giriniz: ");
	scanf("%d",&r);
	
	sonuc = (4/3.0)*PI*(r*r*r);//4/3.0 floata çevirir. Diðer türlü tam sayý deðer verir.
	
	printf("%f",sonuc);
	
	
}
