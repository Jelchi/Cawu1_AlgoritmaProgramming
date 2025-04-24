#include<stdio.h>
#include<string.h>

struct Player {
	char name[100];
	char club[100];
	int rating;
};

Player playerList[255];
int counter = 0;

void write() {
	FILE *fp = fopen("players.txt", "w");
	
	for (int i = 0; i < counter; i++) {
		fprintf(fp, "%s#%s#%d\n", playerList[i].name, playerList[i].club, playerList[i].rating);
	}
	
	fclose(fp);
}

void read() {
	FILE *fp = fopen("players.txt", "r");
	
	if (fp == NULL) {
		printf("File not found\n");
		return;
	}
	
	int i = 0;
	while (!feof(fp)) {
		fscanf(fp, "%[^#]#%[^#]#%d\n", &playerList[i].name, &playerList[i].club, 
										&playerList[i].rating);
		i++;
	}
	
	counter = i;
	
	fclose(fp);
}

void swap(Player *a, Player *b) {
	Player temp = *a;
	*a = *b;
	*b = temp;
}

int partition(Player players[], int l, int r) {
	char pivot[100];
	strcpy(pivot, players[r].name);
	int pivotRating = players[r].rating;
	
	int i = l-1;
	
	for (int j = l; j < r; j++) {
		if (strcmp(players[j].name, pivot) < 0 ||
			(strcmp(players[j].name, pivot) == 0 && players[j].rating > pivotRating)) {
			i++;
			swap(&players[i], &players[j]);
		}
	}
	
	swap(&players[r], &players[i+1]);
	
	return (i+1);
}

// sort
void quickSort(Player players[], int l, int r) {
	if (l < r) {
		int part = partition(players, l, r);
		
		quickSort(players, l, part-1);
		quickSort(players, part+1, r);
	}
}

void insertPlayer() {
	
	//scan
	
	write();
}

void viewPlayer() {
	for (int i = 0; i < counter; i++) {
		printf("Name: %s\n", playerList[i].name);
		printf("Club: %s\n", playerList[i].club);
		printf("Rating: %d\n\n", playerList[i].rating);
	}
}

int binarySearch(Player players[], char find[], int l, int r) {
	while (l <= r) {
		int mid = l + (r-l)/2;
		
		if (strcmp(players[mid].name, find) == 0) {
			return mid;
		}
		
		if (strcmp(find, players[mid].name) < 0) {
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	return -1;
}

void updatePlayer() {
	char search[100];
	scanf("%[^\n]", &search); getchar();
	
	int found = binarySearch(playerList, search, 0, counter);
	if (found != -1) {
		printf("Name: %s\nRating: %d\n", playerList[found].name, playerList[found].rating);
	}
	else {
		printf("not found\n");
	}
}

int main() {
	
	int opt = 0;
	do {
		read();
		quickSort(playerList, 0, counter-1);
		printf("FIFA 23\n");
		printf("1. Insert player\n");
		printf("2. View player\n");
		printf("3. Update player\n");
		printf("4. Exit\n");
		
		printf(">> ");
		scanf("%d", &opt); getchar();
		
		switch(opt) {
			case 1:
				insertPlayer();
				break;
			case 2:
				viewPlayer();
				break;
			case 3:
				updatePlayer();
				break;
			case 4:
				break;
		}
	} while(opt != 4);
	
	return 0;
}
