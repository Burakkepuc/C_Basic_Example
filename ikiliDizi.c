#include <stdio.h>

int main(){
	char twoArrays[3][3][20];//Satýr-Sutun-Karakter
	int i,j;
	
/*	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",twoArrays[i][j]);
		}
		printf("\n");
		
	}*/
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d. Kullanici adi : ",j+1);
		scanf("%s",&twoArrays[i][j]);
	
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d. Kullanici adi: %s\n",j+1,twoArrays[i][j]);
}

}
	
}
