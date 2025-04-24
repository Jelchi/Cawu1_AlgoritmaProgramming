#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct game{
	char name[101]; 
	char creator[101]; 
	char genre[101]; 
	int price; 
	
};

game a[101]; 
int size = 0; 
void mainMenu(); 

void releasedNewGame(){
	char name[101]; 
	char creator[101]; 
	char genre[101]; 
	int price; 
	
	do{
		printf("Input New Game Name [must be more than 5 character]: "); 
		scanf("%s", &name); 
		fflush(stdin); 
		
		if(strlen(name)>5){
			break; 
		}
	}while(1); 
	
	do{
		printf("Input Creator Name [Name must be between 7-15 character]: "); 
		scanf("%s", &creator); 
		fflush(stdin); 
		
		if(strlen(creator)>7 && strlen(creator)<15){
			break; 
		}
	}while(1); 
	
		char x[] = "RPG"; 
		char y[] = "FPS"; 
		char z[] = "MMORPG"; 
	do{
		printf("Input Game Genre [RPG|FPS|MMORPG]: "); 
		scanf("%s", &genre); 
		fflush(stdin); 
	}while (strcmp(x,genre) && strcmp(y,genre) && strcmp(z, genre)); 
	
	do{
		printf("Input Price [Must be More Than 0]"); 
		scanf("%d", &price); 
		fflush(stdin); 
		
		
	}
	
}

void updatedNewGame(){
	int data = 0; 
	do{
		
	}
	if(data== 0){
		puts("tidak ada data"); 
	}else {
		printf("| %-3s | %-9s | %-15s | %-5s | %-15d |", "No.", "Nama Game", "Nama Creator", "Genre", "Price"); 
	}
}

void publishNewGame(){
	
}

void mainMenu(){
	int opt; 
	do{
		system("cls"); 
		puts("Jelvis Game Studio"); 
		puts("========================"); 
		puts("1. Released New Game"); 
		puts("2. View Updated New Game"); 
		puts("3. Publish New Game"); 
		puts("4. Exit"); 
		printf(">> "); 
		scanf("%d", &opt); 
		fflush(stdin); 
		system("cls"); 
		
		switch(opt){
			case 1: 
				releasedNewGame();
				break;
			case 2:
				updatedNewGame(); 
				break; 
			case 3:
				publishNewGame(); 
				break; 
			case 4: 
				puts("Terimakasih :)"); 
				break; 
			default:
				puts("invalid data"); 
				system("pause"); 
				break; 
		} 
	}while(opt != 4); 
}
int main (){
	mainMenu(); 
	return 0; 
} 
