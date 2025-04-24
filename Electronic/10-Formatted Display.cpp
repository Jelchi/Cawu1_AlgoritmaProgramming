/*
	Display the provided data but using formatted table.
	
	Example Output:
	| No. | Id    | Name      |
	| 1   | TEST3 | Sampoerna |
	| 2   | TEST9 | Camel     |
	| 3   | LOM1  | Marlboro  |
*/

#include <stdio.h>

// Struct
struct Cigarette {
	char id[6];
	char name[17];
};

int main() {
	// Array to display
	Cigarette cigarretes[3];
	
	cigarretes[0] = (Cigarette){ "TEST3", "Sampoerna" };
	cigarretes[1] = (Cigarette){ "TEST9", "Camel" };
	cigarretes[2] = (Cigarette){ "LOM1", "Marlboro" };
	printf("| %-3s | %-5s | %-17s |\n", "No.", "Id", "Name"); 	
	
	// Display the data
	for(int i=0; i<3; i++){
		printf("| %-3d | %-5s | %-17s |\n", i+1, cigarretes[i].id, cigarretes[i].name); 

	}
	
	return 0;
}
