#include <stdio.h>
#include <math.h>

int main(){
/*	int sayi,i;
	float top,ort;
	
	
	for(i=0;i<5;i++){
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&sayi);
		top=top+sayi;
		
	}
	ort=top/5;
	printf("5 sayinin aritmatik ortalamasi: %.2f ",ort);
	*/
	
	int a,b,c;
	float delta,x1,x2;
	
	printf("Denklemin a'sini girin: ");
		scanf("%d",&a);
	printf("Denklemin b'sini girin: ");
		scanf("%d",&b);
	printf("Denklemin c'sini girin: ");
		scanf("%d",&c);
		
		delta = b*b -(4*a*c);
	/*	x1=(-b+(sqrt(delta))/(2*a));
		x2=(-b-	(sqrt(delta))/(2*a));
	*/
		delta = b*b -(4*a*c);
		x1=(-b+(sqrt(delta)) ) /2*a;
		x2=(-b-(sqrt(delta)) )/2*a;
	
		printf("Denklemin 1. koku %.2f\n Denklemin 2. koku %.2f",x1,x2);
	
	
}
