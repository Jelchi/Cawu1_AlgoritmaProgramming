#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

struct Player {
	int zenn;
	int sword;
	int head;
	int chest;
	bool alive;
} player;

struct Boss {
	int power;
	bool isDefeated;
} bosses[3];

int floor = 1;

void showMap(){
	system("cls");
	printf("Floor | Status\n");
	printf("===============\n");
	for (int i = 15; i >= floor; i--){
		printf("%6d| ", i);
		if (i == floor){
			printf("Player\n");
		} else if (i % 5 == 0){
			printf("-Boss-\n");
		} else {
			printf("--\?\?--\n");
		}
	}
	printf("\n");
}

void showStatus(){
	printf("Status (%d Zenn)\n", player.zenn);
	printf("Sword - Power: %d\n", player.sword);
	printf("Head  - Power: %d\n", player.head);
	printf("Chest - Power: %d\n", player.chest);
	printf("\n");
}

void showMenu(){
	printf("Choose:\n");
	printf("1. Go Up\n");
	printf("2. Fight\n");
	printf("3. Shop\n");
	printf("4. Quit\n");
}

void askUser(int *ch){
	do{
		printf("Choose: ");
		scanf("%d", ch); getchar();
		if (*ch < 1 || *ch > 4){
			printf("Invalid choice\n");
			sleep(1);
		}
	} while (*ch < 1 || *ch > 4);
}

void goUp(){
	if (floor % 5 == 0 && bosses[floor / 5 - 1].isDefeated == false){
		printf("You Must Fight the Boss Before You Can Go Up\n");
	} else if (floor == 15){
		printf("You Already at Max Floor\n");
	} else {
		floor++;
		printf("You Climb Up to Floor %d\n", floor);
	}
	sleep(1);
}

void lost(){
	printf("You Lose!!!\n");
	printf("Game Over\n");
	player.alive = false;
	sleep(1);
}

void treasure(const char *winCondition){
	if (strcmp(winCondition, "Fight") == 0){
		printf("You Win!!!\n");
	} else if (strcmp(winCondition, "Found") == 0){
		printf("You Found Treasure!!!\n");
	}
	int receiveZenn = floor * 10 + rand() % 31;
	player.zenn += receiveZenn;
	printf("You Get %d Zenn\n", receiveZenn);
	sleep(1);
}

void fightPrompt(int playerPower, int enemyPower){
	printf("Player Total Attack : %d\n", playerPower);
	printf("Enemy Total Attack  : %d\n", enemyPower);
	printf("\n");
	printf("Fighting..");
	sleep(1);
	printf(".");
	sleep(1);
	printf("\n");
	printf("\n");
}

void fightBoss(){
	int playerPower = player.chest + player.head + player.sword;
	fightPrompt(playerPower, bosses[floor / 5 - 1].power);
	if (playerPower >= bosses[floor / 5 - 1].power){
		treasure("Fight");
		bosses[floor/5 - 1].isDefeated = true;
	} else {
		lost();
	}
}

void fightMonster(){
	int monsterPower = floor * 20 + rand() % (9 * floor + 1);
	int playerPower = player.chest + player.head + player.sword;
	fightPrompt(playerPower, monsterPower);
	if (playerPower >= monsterPower){
		treasure("Fight");
	} else {
		lost();
	}
}

void search(){
	int random = 1 + rand() % 10; // 1 - 10;
	if (random == 10){
		treasure("Found");
	} else {
		fightMonster();
	}
}

void fight(){
	if (floor % 5 == 0){
		fightBoss();
	} else {
		search();
	}
}

void generateEquipment(char **eq, int *power, int *zenn){
	char itemList[3][100001] = {"Sword", "Head", "Chest"};
	int randomIndex = rand() % 3;
	strcpy(*eq, itemList[randomIndex]);
	
	*power = floor * (rand() % 50);
	*zenn = *power / 10 * 30;
}

void shopPrompt(char *eq, int power, int cost){
	printf("Welcome to Shin Shop\n");
	printf("We have a %s with Power %d. The Cost is %d Zenn\n", eq, power, cost);
	printf("\n");
	printf("1. Buy\n");
	printf("2. Quit Shop\n");
}

void askShop(int *ch){
	do {
		printf("Choose: ");
		scanf("%d", ch); getchar();
		if (*ch < 1 || *ch > 2){
			printf("Invalid Choice\n");
			sleep(1);
		}
	} while (*ch < 1 || *ch > 2);
}

void buy(char *eq, int power, int cost){
	if (player.zenn >= cost){
		player.zenn -= cost;
		if (strcmp(eq, "Head") == 0){
			if (power > player.head){
				player.head = power;
			}
		} else if (strcmp(eq, "Sword") == 0){
			if (power > player.sword){
				player.sword = power;
			}
		} else if (strcmp(eq, "Chest") == 0){
			if (power > player.chest){
				player.chest = power;
			}
		}
		printf("Thank you for Buying..\n");
		sleep(1);
	} else {
		printf("You Don't have enough money..\n");
		sleep(1);
	}
}

void shop(){
	int ch;
	char *equipment = (char *) malloc(100001 * sizeof(char));
	int power, cost;
	generateEquipment(&equipment, &power, &cost);
	shopPrompt(equipment, power, cost);
	askShop(&ch);
	switch (ch){
		case 1:
			buy(equipment, power, cost);
			break;
		case 2:
			printf("Please Come Back Again..\n");
			sleep(1);
			break;
	}
}

void game(){
	int ch;
	while (player.alive){
		showMap();
		showStatus();
		showMenu();
		askUser(&ch);
		switch (ch){
			case 1:
				goUp();
				break;
			case 2:
				fight();
				break;
			case 3:
				shop();
				break;
			case 4:
				player.alive = false;
				break;
		}
	}
}

void init(){
	player.zenn = 0;
	player.sword = 30;
	player.head = 0;
	player.chest = 0;
	player.alive = true;
	for (int i = 0; i < 3; i++){
		bosses[i].power = ((i + 1) * 5) * 30;
		bosses[i].isDefeated = false;
	}
}

int main(){
	srand(time(NULL));
	init();
	game();
	
	return 0;
}
