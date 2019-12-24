#include <stdio.h>
#include <stdlib.h>
struct araba{
	char marka[20],model[20];
	float km;
	int yil;
	
};

int main(){
	struct araba *pArac;
 	
	int i,x;
	
	printf("Arac sayisi giriniz: ");
	scanf("%d",&x);
	
	pArac=(struct araba*)malloc(sizeof(struct araba)*x);
	
	for(i=0;i<x;i++){
			printf("Arac markasi: ");
			scanf("%s",(pArac+i)->marka);
		
			printf("Arac model: ");
			scanf("%s",(pArac+i)->model);
		
			printf("Arac yili: ");
			scanf("%d",&(pArac+i)->yil);
		
			printf("Arac km'si: ");
			scanf("%f",&(pArac+i)->km);
	}
	
	printf("\n\n------Ciktilar-------\n\n");
	
	for(i=0;i<x;i++){
			
		
			printf("Arac markasi:%s\n ",(pArac+i)->marka);
			
			printf("Arac model:%s\n",(pArac+i)->model);
			
		
			printf("Arac yili:%d\n ",(pArac+i)->yil);
		
			printf("Arac km'si:%.3f \n\n",(pArac+i)->km);
	}
	

}
