#include <stdio.h>
//switch-case*
//Breakleri unutma,

int main(){
	int islem,tutar,bakiye=1000;
		printf("Islemler\n");
	git: printf("1)Para cekme\n2)Para yatirma\n3)Havale yapma\n4)Bakiye sorgulama\n5)Kart iade\n\n\n");
		
		 printf("Islemi seciniz:\n ");
		 scanf("%d",&islem);
		
		switch(islem){
			case 1:
				printf("Cekilecek tutari girin: ");
				scanf("%d",&tutar);
				
					if(tutar>bakiye){
						printf("Yetersiz bakiye");
					}
					else{
						bakiye=bakiye-tutar;
						printf("Islem gerceklestirildi.\n Kalan bakiye: %d",bakiye);
					}
					
				
				break;
					
			case 2:
					printf("Yatirilacak tutari secin: ");
				scanf("%d",&tutar);
				
				bakiye+=tutar;
				printf("Islem gerceklestirildi.\n Kalan bakiye: %d",bakiye);
				break;
				
			case 3:
					printf("Havale yapilacak tutari secin: ");
				scanf("%d",&tutar);
				
				bakiye+=tutar;
				break;
			case 4:
					printf("Bakiyeniz :%d\n",bakiye);
			case 5:
					printf("Kartiniz iade edilmistir. ");
				break;
			
			
			default:
			printf("Yanlis secim yaptiniz. "); 	goto git; break;
			
			
			
			
			goto git;
		}
	

}



/*
	switch(operation){
		
		case: 	
			
			islemler
			break;
	
		case: 
			islemler
			break;
		
		case: 
		islemler
		break;
	
	}
*/
