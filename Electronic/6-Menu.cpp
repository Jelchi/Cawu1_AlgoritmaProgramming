/*
	Display this menu
	
	Main Menu
	============
	1. Say Hello
	2. Say Hello, World
	3. Exit
	
	Use switch condition, and function, and a looping menu.
*/

#include <stdio.h>
#include <stdlib.h>

void b(){
	puts("Hello, World"); 
	system("pause"); 
}

void a(){
	puts("Hello"); 
	system("pause"); 
} 

void mainMenu(){
	int opt; 
	do{
		puts("Main Menu"); 
		puts("============================"); 
		puts("1. Say Hello"); 
		puts("2. Say Hello, World "); 
		puts("3. Exit");
		printf(">> "); 
		scanf("%d", &opt); 
		getchar();
		
		system("cls"); 
		switch(opt){
			case 1: 
				a(); 
				break; 
			
			case 2: 
				b(); 
				break; 
				
			case 3: 
				puts("Terimakasih"); 
				break; 
				
			default: 
				puts("Error"); 
				system("pause"); 
				break; 
		}
	}while(opt !=3); 
}

int main (){
	mainMenu(); 
	return 0; 
}
