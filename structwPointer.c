#include <stdio.h>
#include <stdlib.h>

struct insan{
	char isim[10];
	char soyisim[10];
	int yas;
};


int main(){
	
	struct insan *ptrinsan;
	
	int i, n;
	
   printf("Enter the number of persons: ");
   scanf("%d", &n);
	
	// allocating memory for n numbers of struct person
   ptrinsan = (struct insan*) malloc(n * sizeof(struct insan));
	

	  for(i = 0; i < n; ++i)
   {
	printf("Isim giriniz: ");
	scanf("%s",ptrinsan[i].isim);
	printf("Soyisim giriniz: ");
	scanf("%s",(ptrinsan+i)->soyisim);
	printf("Yas giriniz: ");
	scanf("%d",&(ptrinsan+i)->yas);
}
printf("\n\n----------Sonuclar--------\n\n");

for(i=0;i<n;i++){
	printf("%s %s %d\n",(ptrinsan+i)->isim,(ptrinsan+i)->soyisim,(ptrinsan+i)->yas);
	}
}
