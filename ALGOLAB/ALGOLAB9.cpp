#include <stdio.h>
#include <stdlib.h>

struct Game{
	char name[50];
	int price;
	double rating;
};

Game gameList[100];
int counter = 0; 

void write(){
	
	FILE * file = fopen("game.txt", "w");
	// r read
	// w write nulis dr awal. jd klo udh ada pun akan keapus
	// a nambahin tulisan 
	
	for (int i = 0; i < counter; i++){
		fprintf(file, "%s#%d#%lf\n", gameList[i].name, gameList[i].price, gameList[i].rating);
	}
	
	fclose(file);
}

void addGame(){
	printf("Game name: ");
	scanf("%[^\n]", &gameList[counter].name);
	getchar();
	
	printf("Game price: ");
	scanf("%d", &gameList[counter].price);
	
	printf("Game rating: ");
	scanf("%lf", &gameList[counter].rating);
	
	counter++;
	write();
}
void read(){
	FILE * file = fopen("game.txt", "r");
	
	int i = 0;
	while(!feof(file)){
		fscanf(file, "%[^#]#%d#%lf\n", gameList[i].name, &gameList[i].price, &gameList[i].rating);
		i++;
	}
	counter = i;
	printf("%d\n", counter);
	fclose(file);
}

void viewGameList(){
	read();
	printf("| No.  | Nama Game | Harga | Rating| \n");
	for(int i = 0; i < counter; i++){
		printf("|%2d |%-9s | %-5d | %-6.2lf |\n", i+1, gameList[i].name, gameList[i].price, gameList[i].rating);
	}
}

int main(){
	int opt = 0; 
	do {
		printf("Game Store\n");
		printf("1. Add game\n");
		printf("2. View game\n");
		printf("3. Exit\n");
		
		scanf("%d", &opt);
		getchar();
		
		switch (opt){
			case 1:
				addGame();
				break;
			case 2:
				viewGameList();
				break;
			case 3:
				break;
			default:
				printf("Wrong Input!\n");
				break;
		}
	}while (opt != 3);
}
