#include <stdio.h>

int main(){
	/*int v1,v2,f1;
	float ort,ort2;
	
	printf("Vize notunu giriniz: ");
	scanf("%d",&v1);
	
	printf("2.Vize notunu giriniz: ");
	scanf("%d",&v2);
	
	printf("Final notunu giriniz: ");
	scanf("%d",&f1);
	
	printf("Universite ortalmasi kac: ");
	scanf("%f",&ort2);
	
	ort=(v1+v2+f1)/3.0;
	
	if(ort>60){
		printf("Tebrikler gectiniz.");
		
	}
	else if(ort>50 && ort<60){
		printf("Dersten bute kaldiniz\n");
		
		if(ort2<2.5){
			printf("Butu gecsen bile  dersi seneye al,Cunku ortalaman dusuk");
		}
	}
	else{
		printf("Dersten kaldiniz.");
	}*/
	
	int v1,v2,f1;
	float dersOrt,okulOrt;
	
	printf("1. vize: ");
	scanf("%d",&v1);
	printf("2. vize: ");
	scanf("%d",&v2);
	printf("1. final: ");
	scanf("%d",&f1);
	
	printf("Okul ortalamasini giriniz: ");
	scanf("%f",&okulOrt);
	
	dersOrt= v1*0.3+v2*0.3+f1*0.4;
	
	if(dersOrt>=90){
		printf("Harf notunuz -AA ve Ders Ortalamaniz: %f",dersOrt);
	}
	else if(dersOrt>=85 && dersOrt<90){
		printf("Harf notunuz -BA ve Ders Ortalamaniz: %f",dersOrt);
	}
	else if(dersOrt>=80 && dersOrt<85){
		printf("Harf notunuz -BB ve Ders Ortalamaniz: %f",dersOrt);
	}
	else if(dersOrt>=75 && dersOrt<80){
		printf("Harf notunuz -CB ve Ders Ortalamaniz: %f",dersOrt);
	}
	else if(dersOrt>=70 && dersOrt<75){
		printf("Harf notunuz -CC ve Ders Ortalamaniz: %f",dersOrt);
		
		if(okulOrt<2.5){
			printf("Dersi tekrar alman faydali olur cunku ortalaman dusuk");
		}
	}
	else if(dersOrt>=65 && dersOrt<70){
		printf("Harf notunuz -DC ve Ders Ortalamaniz: %f\n",dersOrt);
		if(okulOrt<2.5){
			printf("Dersi tekrar almak zorundasin cunku ortalaman cok dusuk");
		}
	}
	
	else if(dersOrt>=60 && dersOrt<65){
		printf("Harf notunuz -DD ve Ders Ortalamaniz: %f\n",dersOrt);
		if(okulOrt<2.5){
			printf("Danismaninla konusmak zorundasin");
		}
	}
	else{
		printf("Harf notunuz -FF ve Ders Ortalamaniz: %f\n Dersten kaldiniz.",dersOrt);
	}
	
	
	
}
