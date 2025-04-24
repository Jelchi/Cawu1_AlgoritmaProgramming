/*
	- Ask the user for his / her name, but in this case the minimum character is 3 and maximum is 32.
		Then display the user's name.
	- Ask the user for his / her age, but in this case the minimum age is 17 to 50.
	- Ask the user for his / her code name, but in this case it must have 1 character and 2 number ( example: A86 or 9K8 or 72M ).
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char name[1001];
	do{
		system("cls");
		printf("Name: ");  
		scanf("%[^\n]", &name); 
		getchar(); 
		
		if(strlen(name)>=3 && strlen(name)<= 32){ 
			break;
		}
	}while(1); 
	
	int age; 
	do{
		system("cls"); 
		printf("Age: "); 
		scanf("%d", &age); 
		getchar(); 
		
		if(age>=17 && age<=50){
			break; 
		}
	}while(1);
	
	int flag=0; 
		
	char id[1001]; 
	do{
		system("cls"); 
		printf("ID: "); 
		scanf("%s", &id); 
		getchar(); 
	
//		if(isalpha(id[0])&&isdigit(id[1])&&isdigit(id[2]) || isalpha(id[1])&&isdigit(id[0])&&isdigit(id[2]) || isalpha(id[2])&&isdigit(id[1])&&isdigit(id[0
//			break; 	
//		}


		for(int i=0; i< strlen(id); i++){
			if(id[i]>='a' && id[i]<='z' || id[i]>='A' && id[i]<='Z'){
				flag =1; 
			}
		}
		
		
	}while(flag == 0); 
	
	return 0;
} 
