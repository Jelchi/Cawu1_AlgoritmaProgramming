#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//peralatan 
int zen = 0;
int sword = 30; 
int head = 0; 
int chest =0;  


//shop
char x[3][1001] = {"Sword", "Head", "Chest"}; 
int size = 2; 
int y = 0; //power
int z; //price 

//floor
int floor = 1; 
int lt= 15; 


//map

//attack
int powerAtttack=0; 

char map [15][1001] = {    "15| -Boss-", "14| --??--", "13| --??--", "12| --??--", 
   " 11| --??--", "10| -Boss-", "9| --??--",  "8| --??--",  "7| --??--",  "6| --??--",  "5| -Boss-", "4| --??--", "3| --??--", "2| --??--","1| Player",}; 

void showMap(){
	for(int i= lt; i<=floor; i--){
			if(i== 1 && i== 6 && i==11){
				printf("   %d| -Boss-", lt); 
			} else if(i=15){
				printf("   %d| Player", lt); 
			}
	printf("\n");
	}
}

void mapGenerate(){
	for(int i= lt; i<=floor; i--){
		//floor--; 
}





void move(){
	//dia akan naik satu 
	floor++; 
	
	mapGenerate(); 
	
	
}

void attack(){
	if(move =="--Boss--"){
		power++; 
	}
}


void beli(){
	
	char senjataAcak [3][1001] = {"Sword", "Head", "Chest"}; 
	int senjata_rand = rand() %3; 
	x[size][1001] = senjataAcak[senjata_rand][1001]; 
	size++; 
	
	int rand_power = rand() %50; 
	int power = floor * rand_power; 
	
	int harga;
	harga = power*30/10; 
	
	// mengecek apakah zenn pemain cukup
	
	
}

void shop(){
	int opt; 
	do{
		puts("Welcome to Shin Shop"); 
		puts("We have a X with Power Y. The Cost is Z Zenn"); 
		
		puts("1. Buy"); 
		puts("2. Quit Shop"); 
		printf("Choose: "); 
		scanf("%d", &opt); 
		
		switch(opt){
			case 1: 
				beli(); 
				break; 
				
			case 2: 
				puts("Please Come Back Again"); 
				break; 
			
			default: 
				break; 
		}
	}while(opt !=2); 
}

void control(){
	int ctrl; 
		
	do{
		puts("Choose: ");
		puts("1. Go Up"); 
		puts("2. Fight"); 
		puts("3. Shop"); 
		puts("4. Quit"); 
		printf("Choose: "); 
		scanf("%d", &ctrl); 
		
		system("cls"); 
		
		switch(ctrl){
			case 1: 
				move(); 
				break; 
			
			case 2: 
				attack(); 
				break; 
			
			case 3: 
				shop(); 
				break; 
			
			case 4: 
				break; 
			
			default: 
				break; 
		}
	}while(ctrl !=4);
}

void lantai(){
	puts("Floor | Status"); 
	puts("==================");	
	
	showMap(); 
	puts("    15|-Boss-"); 
	puts("    14| --??--"); 
	puts("    13| --??--"); 
	puts("    12| --??--"); 
	puts("    11| --??--"); 
	puts("    10| -Boss-"); 
	puts("     9| --??--"); 
	puts("     8| --??--"); 
	puts("     7| --??--"); 
	puts("     6| --??--"); 
	puts("     5|-Boss-"); 
	puts("     4| --??--"); 
	puts("     3| --??--"); 
	puts("     2| --??--"); 
	puts("     1| --??--"); 
	puts("     1| Player"); 
	
	printf("\n");
	
	printf("Status (%d Zenn)\n", zen); 
	printf("Sword - Power: %d\n", sword); 
	printf("Head - Power: %d\n", head); 
	printf("Chest - power: %d\n", chest); 
	
	printf("\n"); 
	
	control(); 
	
}

int main(){
	srand(time(0)); 
	lantai(); 
	return 0; 
}
