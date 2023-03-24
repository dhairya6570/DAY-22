#include<stdio.h>
#include<string.h>

int main (){
	
	char email[50];
	char pass[20];
	
	char correctemail[] = "dhairyapatel20104@gmail.com";
	char correctpass[] = "Paresh6570";
	
	printf("Enter email : ");
	scanf("%s",email);
	
	printf("Enter pass : ");
	scanf("%s",pass);
	
	if(strcmp(email , correctemail) == 0 && strcmp(email , correctpass) == 0){
		printf("Login is successful");
	}
	else{
		printf("Pls try again");
	}
	
	return 0 ;
}
