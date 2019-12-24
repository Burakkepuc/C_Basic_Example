#include <stdio.h>
/*
Döngü baþlangýcý;
while(kosul){


arttýrma  //Sonsuz döngüye girmesin diye.

}
*/

int main(){
	
/*	int i=0;
	while(i<10){
		printf(" %d)Merhaba Dunya\n  ",i+1);
		i++;
		
		
	}*/
	
	int i,fakt=1;
	scanf("%d",&i);
	
	while(i){
		fakt=fakt*i;
		i--;
	}
	printf("%d",fakt);
	
	
	
}
