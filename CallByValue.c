#include <stdio.h>


void sayiDegistir(int s1,int s2){
	
	
		int z=s1;
		s1=s2;
		s2=z;
	

			printf("x= %d y= %d",s1,s2);
	
	
}

int main(){

	int x = 5;
	int y = 7;
	
	printf("X'in degeri %d, Y'nin degeri %d\n ",x,y);
	
	sayiDegistir(x,y);
	
	
	
}


