#include <stdio.h>

int main(){
	int a=5,*ap;
	float b= 3.2,*bp;
	double c=3.412,*cp;
	char d='a',*dp;
	
	int sayilar[5]={1,2,3,4,5},*arrayp;
	
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	
	arrayp=&sayilar[1];
	
	printf("%d int adresi %x'dir. \n",*ap,ap);
	printf("%.2f float adresi %x'dir. \n",*bp,bp);
	printf("%.2lf double adresi %x'dir. \n",*cp,cp);
	printf("%c char adresi %x'dir. \n",*dp,dp);
	printf("%d arrays adresi %x'dir. \n",*arrayp,arrayp);

}
