#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

//player
int hati = 100; 
int coin = 0; 

//move
int posisi =0; 

//attack
int guessNumber; 

//enemy

//map
char map[1001] = {'P', '.', '.', '*', '0', '.', '1', '.', '*', '1', '*', '.', '.', '0', '.', '.'}; 
int size = 15;

void showMap(){
	for(int i=posisi; i < size; i++){
		printf("%c", map[i]); 
	}
	printf("\n"); 
	puts("==================================");
}

void peta(){
	char map_rand[1001] = {'.', '*', '1', '0'}; 
	int randomMap = rand() % 4; //random dari 0-4 
	
	map[size] = map_rand[randomMap]; 
	size++;
}

void showPlayer(){
	puts("Player Status"); 
	puts("=================================="); 
	printf("Blood: %d\n", hati); 
	printf("Coin: %d\n", coin); 
	puts("=================================="); 
}

void attack(){
		printf("Tebak Angka[tebak angka 0-5]: "); 
		scanf("%d", &guessNumber); 
		getchar(); 
		
		int randomNumber = rand()%6; 
		
		if(guessNumber == randomNumber){
			coin+=10;
		}else{
			hati-=10;
		}
		
		
		
		system("cls"); 
}

void move(){
	posisi++; 
	
	if (map[posisi] == '1' || map[posisi] == '0'){
		
		attack(); 
	}
	
	if(map[posisi] =='*'){
		coin+=5;
	}
	
	peta(); 
	map[posisi] = 'P'; 
}

void control(){
	int ctrl; 
	
	do{
		if(hati==0){
			puts("Game Over"); 	 
			break; 
		} 
		
		if(coin >= 50 && hati >= 1){
			puts("congratulation"); 
			break;
		}
		
		
		showPlayer();
		showMap();  
		puts("1 & 0 <<attack>> * <<coin>>"); 
		puts("1. Move"); 
		puts("2. Exit"); 
		printf(">> "); 
		scanf("%d", &ctrl); 
		getchar(); 
		
		system("cls"); 
		switch(ctrl){
			case 1: 
				move(); 
				break; 
				attack(); 
				break; 
				
			default: 
				puts("Terimakasih"); 
				break; 
		} 
	}while(ctrl<=1); 
}

int main(){
	srand(time(0));
	control(); 
	return 0; 
}
