#include <stdio.h>


int main(){
	int i=5;
	
	int *p = &i; //p i'nin yerini tutuyor.
	
	printf("%u\n",p);
	
	printf("%d",*p);
}
