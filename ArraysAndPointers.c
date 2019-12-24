#include <stdio.h>

int max(int *array,int size){
	int maks = 0;
	int i;
	
	for(i=0;i<size;i++){
		if(array[i]>maks){
			maks=array[i];
		}
	}
	return maks;
}

int main(){
/*	int sayilar[]={1,2,3,4,5};
	
	int *p = sayilar;//array'in baslangic adresini pointer'a atar.
	//sayilar[0] 
	
	printf("%u\n",p);
	printf("%u\n",p+1);
	printf("%u\n",p+2);
	printf("%u\n",p+3);
		
		printf("\n\n--------Array Elemanlari Offset---------\n\n");
		
	printf("%d\n",*p);
	printf("%d\n",*p+1);
	printf("%d\n",*p+2);
	printf("%d\n",*p+3);

	//*p+1 --------> p[1]
						//sayilar[1]
	printf("\n\n--------Array Elemanlari---------\n\n");
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);
	printf("%d\n",p[2]);
	printf("%d\n",p[3]);
	*/
	
	int sayilar[]={104,3,4,42,100,1,99,86,105};
	
	printf("max = %d",max(sayilar,9));
	
}
