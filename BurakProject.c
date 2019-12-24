#include <stdio.h>
#include <stdlib.h>

int totalVehicle


void admin();
void adminMenu();
int main(){
	int x;
	
	printf("------------------WELCOME-----------------\n\n");
	printf("1) Admin\n");
	printf("2) Guest\n");
	printf("3) Exit\n\n");
	
	printf("Choose one: ");
	scanf("%d",&x);
	system("cls");


switch(x){
	case 1:
		admin();
		break;
}

}
void admin(){
	char password[10],username[10];
	char user_control[]="user",pass_control[]="1234";
	
	
	printf("Username: ");
	scanf("%s",&username);
	
	printf("Password: ");
	scanf("%s",&password);
	
	if(strcmp(user_control,username)==0 && strcmp(pass_control,password)==0 ){
		printf("\nSucces Login\n");
		system("cls");
		
		adminMenu();
	}
	else{
		printf("Try again. Press Any Key.");
		getch();
		admin();
	}
}

void adminMenu(){
	printf("1)Total Vehicle\n");
	printf("2)Free parking lot\n");
	
	
}
