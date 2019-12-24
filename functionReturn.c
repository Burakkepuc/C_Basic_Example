#include <stdio.h>
	
	int topla(int s1,int s2){
		return s1+s2;
	}
	
	int faktoriyel (int x){
		int fakt=1,i;
		for(i=1;i<=x;i++){
			fakt*=i;
		}
		return fakt;//Unutma aþaðý gidecek
		
		
	}
	
int main(){
/*	int sayi1,sayi2;
	int toplam;
	
		printf("Sayi giriniz: ");
		scanf("%d %d",&sayi1,&sayi2);
		
		toplam = topla(sayi1,sayi2);
		
		printf("%d",toplam);*/
		
		int sonuc,sayi;
		
		printf("sayi giriniz: ");
		scanf("%d",&sayi);
		
			sonuc = faktoriyel(sayi); 
			printf("%d",sonuc);
		
}

