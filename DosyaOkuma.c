#include <stdio.h>


int main(){
	/*
	char str;
	
	FILE *file;
	file = fopen("Okuma.txt","r");
	if(file!=NULL){
		str=fgetc(file);
		printf("%c",str);
	}
	else{
		printf("Dosya Bulunamadi.");
	}


	FILE *fptr;
	fptr=fopen("Okuma.txt","r");
	
	char ad[10],soyad[10];
	int yas;
	
	if(fptr!=NULL){
		fscanf(fptr,"%s",&ad);
		fscanf(fptr,"%s",&soyad);
		fscanf(fptr,"%d",&yas);
		printf("%s %s %d",ad,soyad,yas);
	}
	else{
		printf("Dosya Bulunamadi.");
	}
	
		FILE *fptr;
		char kelime[50][20];
		int i=0;
		if((fptr=fopen("Okuma.txt","r"))!=NULL)
{
			while(!feof(fptr)){//Dosyanýn sonuna eþit olmadýðý/gelinmediði sürece.
			fscanf(fptr,"%s ",&kelime[i]);
			printf("%s ",kelime[i]);
			i++;
		}
}
		else{
			printf("Dosya Bulunamadi. ");
		}

*/
	char numaralar[10][15],isimler[10][15];
	int notlar[10],i=0;
		FILE *fptr;

	if((fptr=fopen("isimler.txt","r"))!=0){
		while(!feof(fptr)){
			fscanf(fptr,"%s %s %d",&numaralar[i],&isimler[i],&notlar[i]);
			printf("%s %s %d\n",numaralar[i],isimler[i],notlar[i]);
			
			i++;
		}
}
		else{
			printf("Dosya Bulunamadi");
		}
		
	

		
	
}
