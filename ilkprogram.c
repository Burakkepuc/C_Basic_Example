#include <stdio.h>

int main(){
	int i;
	char isim[20];
	printf("Lutfen isminizi giriniz: ");
	scanf("%s",&isim);
	for(i=0;i<10;i++){
		printf("Merhaba %s\n",isim);
	}
	
	getch();
}
